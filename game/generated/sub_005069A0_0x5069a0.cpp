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

// Function: sub_005069A0
// Address: 0x5069a0 - 0x506a68
void sub_005069A0_0x5069a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005069A0_0x5069a0");
#endif

    switch (ctx->pc) {
        case 0x5069bcu: goto label_5069bc;
        case 0x506a08u: goto label_506a08;
        case 0x506a50u: goto label_506a50;
        default: break;
    }

    ctx->pc = 0x5069a0u;

    // 0x5069a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5069a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5069a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x5069a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x5069a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5069a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5069ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x5069acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x5069b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5069b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5069b4: 0xc141a08  jal         func_506820
    ctx->pc = 0x5069B4u;
    SET_GPR_U32(ctx, 31, 0x5069BCu);
    ctx->pc = 0x5069B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5069B4u;
    // 0x5069b8: 0x3c11ffff  lui         $s1, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x506820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506820u, 0x5069B4u, 0x5069BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5069BCu;
label_5069bc:
    // 0x5069bc: 0x26060022  addiu       $a2, $s0, 0x22
    ctx->pc = 0x5069bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 34));
    // 0x5069c0: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x5069c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x5069c4: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x5069c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5069c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5069c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5069cc: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x5069ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5069d0: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x5069d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x5069d4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x5069d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x5069d8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x5069d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x5069dc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x5069dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x5069e0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x5069e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x5069e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x5069e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x5069e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x5069e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x5069ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x5069ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x5069f0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x5069f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x5069f4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x5069f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x5069f8: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x5069f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5069fc: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x5069fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x506a00: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x506A00u;
    SET_GPR_U32(ctx, 31, 0x506A08u);
    ctx->pc = 0x506A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506A00u;
    // 0x506a04: 0xa4e30000  sh          $v1, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x506A00u, 0x506A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506A08u;
label_506a08:
    // 0x506a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x506a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506a0c: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x506a0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506a10: 0x86050028  lh          $a1, 0x28($s0)
    ctx->pc = 0x506a10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x506a14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x506a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506a18: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x506a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x506a1c: 0x8606002a  lh          $a2, 0x2A($s0)
    ctx->pc = 0x506a1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x506a20: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x506a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x506a24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x506a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x506a28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x506a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x506a2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x506a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x506a30: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x506a30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506a34: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x506a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x506a38: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x506a38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x506a3c: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x506a3cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x506a40: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x506A40u;
    {
        const bool branch_taken_0x506a40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x506A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506A40u;
        // 0x506a44: 0xa603000e  sh          $v1, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506a40) {
            ctx->pc = 0x506A50u;
            goto label_506a50;
        }
    }
    ctx->pc = 0x506A48u;
    // 0x506a48: 0xc144af2  jal         func_512BC8
    ctx->pc = 0x506A48u;
    SET_GPR_U32(ctx, 31, 0x506A50u);
    ctx->pc = 0x512BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512BC8u, 0x506A48u, 0x506A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506A50u;
label_506a50:
    // 0x506a50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x506a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x506a54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x506a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x506a58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x506a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x506a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x506A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506A5Cu;
        // 0x506a60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x506A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x506A64u;
    // 0x506a64: 0x0  nop
    ctx->pc = 0x506a64u;
    // NOP
    ctx->pc = 0x506a68u;
}
