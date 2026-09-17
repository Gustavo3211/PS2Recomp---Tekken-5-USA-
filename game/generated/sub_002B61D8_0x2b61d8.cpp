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

// Function: sub_002B61D8
// Address: 0x2b61d8 - 0x2b6250
void sub_002B61D8_0x2b61d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B61D8_0x2b61d8");
#endif

    switch (ctx->pc) {
        case 0x2b6220u: goto label_2b6220;
        case 0x2b622cu: goto label_2b622c;
        case 0x2b6234u: goto label_2b6234;
        default: break;
    }

    ctx->pc = 0x2b61d8u;

    // 0x2b61d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b61d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b61dc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2b61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b61e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b61e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b61e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b61e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b61e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b61ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b61ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b61f0: 0x8ca20074  lw          $v0, 0x74($a1)
    ctx->pc = 0x2b61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x2b61f4: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2b61f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b61f8: 0x30440100  andi        $a0, $v0, 0x100
    ctx->pc = 0x2b61f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2b61fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b61fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2b6200: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6200u;
    {
        const bool branch_taken_0x2b6200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6200u;
        // 0x2b6204: 0xaca30074  sw          $v1, 0x74($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6200) {
            ctx->pc = 0x2B622Cu;
            goto label_2b622c;
        }
    }
    ctx->pc = 0x2B6208u;
    // 0x2b6208: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6208u;
    {
        const bool branch_taken_0x2b6208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6208) {
            ctx->pc = 0x2B622Cu;
            goto label_2b622c;
        }
    }
    ctx->pc = 0x2B6210u;
    // 0x2b6210: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x2b6210u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b6214: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x2b6214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2b6218: 0xc0ac93e  jal         func_2B24F8
    ctx->pc = 0x2B6218u;
    SET_GPR_U32(ctx, 31, 0x2B6220u);
    ctx->pc = 0x2B621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6218u;
    // 0x2b621c: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B24F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B24F8u, 0x2B6218u, 0x2B6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6220u;
label_2b6220:
    // 0x2b6220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6224: 0xc0ac916  jal         func_2B2458
    ctx->pc = 0x2B6224u;
    SET_GPR_U32(ctx, 31, 0x2B622Cu);
    ctx->pc = 0x2B6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6224u;
    // 0x2b6228: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2458u, 0x2B6224u, 0x2B622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B622Cu;
label_2b622c:
    // 0x2b622c: 0xc0ad6da  jal         func_2B5B68
    ctx->pc = 0x2B622Cu;
    SET_GPR_U32(ctx, 31, 0x2B6234u);
    ctx->pc = 0x2B6230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B622Cu;
    // 0x2b6230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B68u, 0x2B622Cu, 0x2B6234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6234u;
label_2b6234:
    // 0x2b6234: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6234u;
    {
        const bool branch_taken_0x2b6234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6234) {
            ctx->pc = 0x2B6238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6234u;
            // 0x2b6238: 0xae2000b8  sw          $zero, 0xB8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B623Cu;
            goto label_2b623c;
        }
    }
    ctx->pc = 0x2B623Cu;
label_2b623c:
    // 0x2b623c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b623cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6240: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b6240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6248: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6248u;
        // 0x2b624c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6250u;
}
