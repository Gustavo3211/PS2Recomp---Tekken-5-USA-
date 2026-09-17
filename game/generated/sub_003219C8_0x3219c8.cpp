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

// Function: sub_003219C8
// Address: 0x3219c8 - 0x321a70
void sub_003219C8_0x3219c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003219C8_0x3219c8");
#endif

    switch (ctx->pc) {
        case 0x321a04u: goto label_321a04;
        case 0x321a20u: goto label_321a20;
        case 0x321a3cu: goto label_321a3c;
        default: break;
    }

    ctx->pc = 0x3219c8u;

    // 0x3219c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3219c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3219cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3219ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3219d0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3219d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3219d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3219d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3219d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3219dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3219e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3219e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219e4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3219e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3219e8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3219e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3219ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219f0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x3219f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3219f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3219f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3219f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3219fc: 0xc0c76ce  jal         func_31DB38
    ctx->pc = 0x3219FCu;
    SET_GPR_U32(ctx, 31, 0x321A04u);
    ctx->pc = 0x321A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3219FCu;
    // 0x321a00: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DB38u, 0x3219FCu, 0x321A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A04u;
label_321a04:
    // 0x321a04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321A04u;
    {
        const bool branch_taken_0x321a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A04u;
        // 0x321a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a04) {
            ctx->pc = 0x321A18u;
            goto label_321a18;
        }
    }
    ctx->pc = 0x321A0Cu;
    // 0x321a0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x321a10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x321A10u;
    {
        const bool branch_taken_0x321a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A10u;
        // 0x321a14: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a10) {
            ctx->pc = 0x321A50u;
            goto label_321a50;
        }
    }
    ctx->pc = 0x321A18u;
label_321a18:
    // 0x321a18: 0xc0c7764  jal         func_31DD90
    ctx->pc = 0x321A18u;
    SET_GPR_U32(ctx, 31, 0x321A20u);
    ctx->pc = 0x31DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD90u, 0x321A18u, 0x321A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A20u;
label_321a20:
    // 0x321a20: 0x262409c0  addiu       $a0, $s1, 0x9C0
    ctx->pc = 0x321a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2496));
    // 0x321a24: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x321a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321a28: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x321a28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a2c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x321a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x321a30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x321a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a34: 0xc0cf026  jal         func_33C098
    ctx->pc = 0x321A34u;
    SET_GPR_U32(ctx, 31, 0x321A3Cu);
    ctx->pc = 0x321A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321A34u;
    // 0x321a38: 0x8fa80008  lw          $t0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C098u, 0x321A34u, 0x321A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A3Cu;
label_321a3c:
    // 0x321a3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x321a3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x321a44: 0x34424005  ori         $v0, $v0, 0x4005
    ctx->pc = 0x321a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
    // 0x321a48: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x321a48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x321a4c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x321a4cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_321a50:
    // 0x321a50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x321a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321a54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x321a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x321a58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321a58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321a5c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x321a5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x321a60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x321a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321a64: 0x3e00008  jr          $ra
    ctx->pc = 0x321A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A64u;
        // 0x321a68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321A6Cu;
    // 0x321a6c: 0x0  nop
    ctx->pc = 0x321a6cu;
    // NOP
    ctx->pc = 0x321a70u;
}
