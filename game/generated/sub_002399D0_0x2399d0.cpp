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

// Function: sub_002399D0
// Address: 0x2399d0 - 0x239a78
void sub_002399D0_0x2399d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002399D0_0x2399d0");
#endif

    switch (ctx->pc) {
        case 0x239a10u: goto label_239a10;
        case 0x239a1cu: goto label_239a1c;
        case 0x239a30u: goto label_239a30;
        default: break;
    }

    ctx->pc = 0x2399d0u;

    // 0x2399d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2399d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2399d4: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x2399d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x2399d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2399d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2399dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2399dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2399e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2399e4: 0x119840  sll         $s3, $s1, 1
    ctx->pc = 0x2399e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2399e8: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x2399e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2399ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2399ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2399f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2399f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2399f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2399f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2399f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2399fc: 0x390c0  sll         $s2, $v1, 3
    ctx->pc = 0x2399fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x239a00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x239a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x239a04: 0x2454d602  addiu       $s4, $v0, -0x29FE
    ctx->pc = 0x239a04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956546));
    // 0x239a08: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x239a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x239a0c: 0x0  nop
    ctx->pc = 0x239a0cu;
    // NOP
label_239a10:
    // 0x239a10: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x239a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x239a14: 0xc08e4f2  jal         func_2393C8
    ctx->pc = 0x239A14u;
    SET_GPR_U32(ctx, 31, 0x239A1Cu);
    ctx->pc = 0x239A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A14u;
    // 0x239a18: 0x90440010  lbu         $a0, 0x10($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2393C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2393C8u, 0x239A14u, 0x239A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A1Cu;
label_239a1c:
    // 0x239a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x239a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x239a28: 0xc08e6d6  jal         func_239B58
    ctx->pc = 0x239A28u;
    SET_GPR_U32(ctx, 31, 0x239A30u);
    ctx->pc = 0x239A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A28u;
    // 0x239a2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B58u, 0x239A28u, 0x239A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A30u;
label_239a30:
    // 0x239a30: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x239a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x239a34: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x239A34u;
    {
        const bool branch_taken_0x239a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A34u;
        // 0x239a38: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a34) {
            ctx->pc = 0x239A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239a10;
        }
    }
    ctx->pc = 0x239A3Cu;
    // 0x239a3c: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x239a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x239a40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239a44: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x239a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x239a48: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x239a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x239a4c: 0x2442d600  addiu       $v0, $v0, -0x2A00
    ctx->pc = 0x239a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956544));
    // 0x239a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239a54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x239a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239a58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239a58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239a5c: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x239a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x239a60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239a60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x239a64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x239a64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239a68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x239a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x239A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A6Cu;
        // 0x239a70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239A74u;
    // 0x239a74: 0x0  nop
    ctx->pc = 0x239a74u;
    // NOP
    ctx->pc = 0x239a78u;
}
