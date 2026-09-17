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

// Function: sub_0021D1E0
// Address: 0x21d1e0 - 0x21d2b8
void sub_0021D1E0_0x21d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D1E0_0x21d1e0");
#endif

    switch (ctx->pc) {
        case 0x21d200u: goto label_21d200;
        case 0x21d20cu: goto label_21d20c;
        case 0x21d224u: goto label_21d224;
        case 0x21d250u: goto label_21d250;
        case 0x21d258u: goto label_21d258;
        case 0x21d260u: goto label_21d260;
        case 0x21d268u: goto label_21d268;
        case 0x21d294u: goto label_21d294;
        case 0x21d29cu: goto label_21d29c;
        default: break;
    }

    ctx->pc = 0x21d1e0u;

    // 0x21d1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d1e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d1e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d1ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d1f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21d1f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21d1f8: 0xc086644  jal         func_219910
    ctx->pc = 0x21D1F8u;
    SET_GPR_U32(ctx, 31, 0x21D200u);
    ctx->pc = 0x21D1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D1F8u;
    // 0x21d1fc: 0x9204002d  lbu         $a0, 0x2D($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21D1F8u, 0x21D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D200u;
label_21d200:
    // 0x21d200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21d200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d204: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21D204u;
    SET_GPR_U32(ctx, 31, 0x21D20Cu);
    ctx->pc = 0x21D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D204u;
    // 0x21d208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21D204u, 0x21D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D20Cu;
label_21d20c:
    // 0x21d20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d210: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21d210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d214: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x21d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21d218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21d21c: 0xc085200  jal         func_214800
    ctx->pc = 0x21D21Cu;
    SET_GPR_U32(ctx, 31, 0x21D224u);
    ctx->pc = 0x21D220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D21Cu;
    // 0x21d220: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214800u, 0x21D21Cu, 0x21D224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D224u;
label_21d224:
    // 0x21d224: 0x92030028  lbu         $v1, 0x28($s0)
    ctx->pc = 0x21d224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21d228: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x21d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21d22c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x21d22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x21d230: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D230u;
    {
        const bool branch_taken_0x21d230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D230u;
        // 0x21d234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d230) {
            ctx->pc = 0x21D248u;
            goto label_21d248;
        }
    }
    ctx->pc = 0x21D238u;
    // 0x21d238: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21d238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d23c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d240: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21D240u;
    {
        const bool branch_taken_0x21d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D240u;
        // 0x21d244: 0xac43886c  sw          $v1, -0x7794($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d240) {
            ctx->pc = 0x21D29Cu;
            goto label_21d29c;
        }
    }
    ctx->pc = 0x21D248u;
label_21d248:
    // 0x21d248: 0xc0b462c  jal         func_2D18B0
    ctx->pc = 0x21D248u;
    SET_GPR_U32(ctx, 31, 0x21D250u);
    ctx->pc = 0x2D18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18B0u, 0x21D248u, 0x21D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D250u;
label_21d250:
    // 0x21d250: 0xc0863ea  jal         func_218FA8
    ctx->pc = 0x21D250u;
    SET_GPR_U32(ctx, 31, 0x21D258u);
    ctx->pc = 0x21D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D250u;
    // 0x21d254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FA8u, 0x21D250u, 0x21D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D258u;
label_21d258:
    // 0x21d258: 0xc0b4592  jal         func_2D1648
    ctx->pc = 0x21D258u;
    SET_GPR_U32(ctx, 31, 0x21D260u);
    ctx->pc = 0x21D25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D258u;
    // 0x21d25c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1648u, 0x21D258u, 0x21D260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D260u;
label_21d260:
    // 0x21d260: 0xc087684  jal         func_21DA10
    ctx->pc = 0x21D260u;
    SET_GPR_U32(ctx, 31, 0x21D268u);
    ctx->pc = 0x21D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D260u;
    // 0x21d264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA10u, 0x21D260u, 0x21D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D268u;
label_21d268:
    // 0x21d268: 0x92050031  lbu         $a1, 0x31($s0)
    ctx->pc = 0x21d268u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x21d26c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21d26cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21d270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d274: 0x24848858  addiu       $a0, $a0, -0x77A8
    ctx->pc = 0x21d274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    // 0x21d278: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x21d278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x21d27c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x21d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x21d280: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21d280u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21d284: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x21d284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x21d288: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21d288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21d28c: 0xc085116  jal         func_214458
    ctx->pc = 0x21D28Cu;
    SET_GPR_U32(ctx, 31, 0x21D294u);
    ctx->pc = 0x21D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D28Cu;
    // 0x21d290: 0xac830050  sw          $v1, 0x50($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214458u, 0x21D28Cu, 0x21D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D294u;
label_21d294:
    // 0x21d294: 0xc0a5048  jal         func_294120
    ctx->pc = 0x21D294u;
    SET_GPR_U32(ctx, 31, 0x21D29Cu);
    ctx->pc = 0x294120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294120u, 0x21D294u, 0x21D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D29Cu;
label_21d29c:
    // 0x21d29c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d2a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d2a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d2a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d2a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21d2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x21D2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2ACu;
        // 0x21d2b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D2B4u;
    // 0x21d2b4: 0x0  nop
    ctx->pc = 0x21d2b4u;
    // NOP
    ctx->pc = 0x21d2b8u;
}
