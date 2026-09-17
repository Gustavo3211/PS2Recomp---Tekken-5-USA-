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

// Function: sub_001099B8
// Address: 0x1099b8 - 0x109a58
void sub_001099B8_0x1099b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001099B8_0x1099b8");
#endif

    switch (ctx->pc) {
        case 0x1099d4u: goto label_1099d4;
        default: break;
    }

    ctx->pc = 0x1099b8u;

    // 0x1099b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1099b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1099bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1099bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1099c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1099c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1099c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1099c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1099c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1099cc: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x1099CCu;
    SET_GPR_U32(ctx, 31, 0x1099D4u);
    ctx->pc = 0x1099D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099CCu;
    // 0x1099d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x1099CCu, 0x1099D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099D4u;
label_1099d4:
    // 0x1099d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1099d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099d8: 0x101f02  srl         $v1, $s0, 28
    ctx->pc = 0x1099d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 28));
    // 0x1099dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1099dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1099e0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1099E0u;
    {
        const bool branch_taken_0x1099e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1099E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099E0u;
        // 0x1099e4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099e0) {
            ctx->pc = 0x1099FCu;
            goto label_1099fc;
        }
    }
    ctx->pc = 0x1099E8u;
    // 0x1099e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1099e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1099ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1099ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1099f0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1099f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1099f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1099F4u;
    {
        const bool branch_taken_0x1099f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1099F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099F4u;
        // 0x1099f8: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099f4) {
            ctx->pc = 0x109A04u;
            goto label_109a04;
        }
    }
    ctx->pc = 0x1099FCu;
label_1099fc:
    // 0x1099fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1099fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x109a00: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x109a00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_109a04:
    // 0x109a04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109a08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x109a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x109a0c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x109a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x109a10: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x109a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x109a14: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x109a14u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 16)); // MMIO: 0x1000b010
    // 0x109a18: 0x112103  sra         $a0, $s1, 4
    ctx->pc = 0x109a18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 4));
    // 0x109a1c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x109a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x109a20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109a24: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x109a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x109a28: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x109a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x109a2c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x109a2cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3)); // MMIO: 0x1000b000
    // 0x109a30: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x109A30u;
    {
        const bool branch_taken_0x109a30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A30u;
        // 0x109a34: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a30) {
            ctx->pc = 0x109A48u;
            goto label_109a48;
        }
    }
    ctx->pc = 0x109A38u;
    // 0x109a38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109a40: 0x804627e  j           func_1189F8
    ctx->pc = 0x109A40u;
    ctx->pc = 0x109A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A40u;
    // 0x109a44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189F8u;
    sub_001189F8_0x1189f8(rdram, ctx, runtime); return;
    ctx->pc = 0x109A48u;
label_109a48:
    // 0x109a48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109a48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109a50: 0x3e00008  jr          $ra
    ctx->pc = 0x109A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A50u;
        // 0x109a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109A58u;
}
