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

// Function: sub_00279A88
// Address: 0x279a88 - 0x279b30
void sub_00279A88_0x279a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279A88_0x279a88");
#endif

    switch (ctx->pc) {
        case 0x279aacu: goto label_279aac;
        case 0x279adcu: goto label_279adc;
        default: break;
    }

    ctx->pc = 0x279a88u;

    // 0x279a88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x279a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279a90: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279a98: 0xac4506b4  sw          $a1, 0x6B4($v0)
    ctx->pc = 0x279a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1716), GPR_U32(ctx, 5));
    // 0x279a9c: 0xa44306ac  sh          $v1, 0x6AC($v0)
    ctx->pc = 0x279a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1708), (uint16_t)GPR_U32(ctx, 3));
    // 0x279aa0: 0xa44006aa  sh          $zero, 0x6AA($v0)
    ctx->pc = 0x279aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1706), (uint16_t)GPR_U32(ctx, 0));
    // 0x279aa4: 0xc09e1f4  jal         func_2787D0
    ctx->pc = 0x279AA4u;
    SET_GPR_U32(ctx, 31, 0x279AACu);
    ctx->pc = 0x279AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279AA4u;
    // 0x279aa8: 0xa44006ae  sh          $zero, 0x6AE($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 1710), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787D0u, 0x279AA4u, 0x279AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279AACu;
label_279aac:
    // 0x279aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x279AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AB0u;
        // 0x279ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279AB8u;
    // 0x279ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x279abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ac4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x279ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x279ac8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x279ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279acc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x279accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x279ad0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x279ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x279ad4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x279AD4u;
    SET_GPR_U32(ctx, 31, 0x279ADCu);
    ctx->pc = 0x279AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279AD4u;
    // 0x279ad8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x279AD4u, 0x279ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279ADCu;
label_279adc:
    // 0x279adc: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x279adcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x279ae0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x279ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x279ae4: 0x9603003c  lhu         $v1, 0x3C($s0)
    ctx->pc = 0x279ae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x279ae8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x279ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x279aec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x279aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x279af0: 0x7c2021  addu        $a0, $v1, $gp
    ctx->pc = 0x279af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x279af4: 0x9484ca50  lhu         $a0, -0x35B0($a0)
    ctx->pc = 0x279af4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294953552)));
    // 0x279af8: 0x442026  xor         $a0, $v0, $a0
    ctx->pc = 0x279af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x279afc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x279afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x279b00: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x279b00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x279b04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x279b04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279b08: 0x9602003c  lhu         $v0, 0x3C($s0)
    ctx->pc = 0x279b08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x279b0c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x279b0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x279b10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x279b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x279b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279b18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x279b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x279b1c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x279b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x279b20: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x279b20u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x279b24: 0xa423ca50  sh          $v1, -0x35B0($at)
    ctx->pc = 0x279b24u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953552), (uint16_t)GPR_U32(ctx, 3));
    // 0x279b28: 0x3e00008  jr          $ra
    ctx->pc = 0x279B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B28u;
        // 0x279b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279B30u;
}
