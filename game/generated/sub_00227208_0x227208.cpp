#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227208
// Address: 0x227208 - 0x2272b0
void sub_00227208_0x227208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227208_0x227208");
#endif

    switch (ctx->pc) {
        case 0x227230u: goto label_227230;
        case 0x227258u: goto label_227258;
        case 0x227268u: goto label_227268;
        case 0x227288u: goto label_227288;
        case 0x227298u: goto label_227298;
        default: break;
    }

    ctx->pc = 0x227208u;

    // 0x227208: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x227208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x22720c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x22720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x227210: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x227210u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x227214: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227218: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x227218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22721c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22721cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227220: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x227220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x227224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227228: 0xc0895da  jal         func_225768
    ctx->pc = 0x227228u;
    SET_GPR_U32(ctx, 31, 0x227230u);
    ctx->pc = 0x22722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227228u;
    // 0x22722c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225768u, 0x227228u, 0x227230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227230u;
label_227230:
    // 0x227230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227234: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x227234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x227238: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227238u;
    {
        const bool branch_taken_0x227238 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x22723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227238u;
        // 0x22723c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227238) {
            ctx->pc = 0x227250u;
            goto label_227250;
        }
    }
    ctx->pc = 0x227240u;
    // 0x227240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227248: 0x8089a00  j           func_226800
    ctx->pc = 0x227248u;
    ctx->pc = 0x22724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227248u;
    // 0x22724c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226800u;
    sub_00226800_0x226800(rdram, ctx, runtime); return;
    ctx->pc = 0x227250u;
label_227250:
    // 0x227250: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x227250u;
    SET_GPR_U32(ctx, 31, 0x227258u);
    ctx->pc = 0x227254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227250u;
    // 0x227254: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x227250u, 0x227258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227258u;
label_227258:
    // 0x227258: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x227258u;
    {
        const bool branch_taken_0x227258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x227258) {
            ctx->pc = 0x227280u;
            goto label_227280;
        }
    }
    ctx->pc = 0x227260u;
    // 0x227260: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x227260u;
    SET_GPR_U32(ctx, 31, 0x227268u);
    ctx->pc = 0x227264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227260u;
    // 0x227264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x227260u, 0x227268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227268u;
label_227268:
    // 0x227268: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x227268u;
    {
        const bool branch_taken_0x227268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x22726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227268u;
        // 0x22726c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227268) {
            ctx->pc = 0x227298u;
            goto label_227298;
        }
    }
    ctx->pc = 0x227270u;
    // 0x227270: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227278: 0x8089a00  j           func_226800
    ctx->pc = 0x227278u;
    ctx->pc = 0x22727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227278u;
    // 0x22727c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226800u;
    sub_00226800_0x226800(rdram, ctx, runtime); return;
    ctx->pc = 0x227280u;
label_227280:
    // 0x227280: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x227280u;
    SET_GPR_U32(ctx, 31, 0x227288u);
    ctx->pc = 0x227284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227280u;
    // 0x227284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x227280u, 0x227288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227288u;
label_227288:
    // 0x227288: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x227288u;
    {
        const bool branch_taken_0x227288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x227288) {
            ctx->pc = 0x22728Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227288u;
            // 0x22728c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22729Cu;
            goto label_22729c;
        }
    }
    ctx->pc = 0x227290u;
    // 0x227290: 0xc089a00  jal         func_226800
    ctx->pc = 0x227290u;
    SET_GPR_U32(ctx, 31, 0x227298u);
    ctx->pc = 0x226800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226800u, 0x227290u, 0x227298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227298u;
label_227298:
    // 0x227298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22729c:
    // 0x22729c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22729cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2272a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2272a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2272a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2272A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2272A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272A4u;
        // 0x2272a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2272A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2272ACu;
    // 0x2272ac: 0x0  nop
    ctx->pc = 0x2272acu;
    // NOP
    ctx->pc = 0x2272b0u;
}
