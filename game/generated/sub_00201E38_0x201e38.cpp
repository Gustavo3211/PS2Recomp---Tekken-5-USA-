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

// Function: sub_00201E38
// Address: 0x201e38 - 0x201f68
void sub_00201E38_0x201e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201E38_0x201e38");
#endif

    switch (ctx->pc) {
        case 0x201eb8u: goto label_201eb8;
        case 0x201ee0u: goto label_201ee0;
        case 0x201efcu: goto label_201efc;
        default: break;
    }

    ctx->pc = 0x201e38u;

    // 0x201e38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x201e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x201e3c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x201e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x201e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x201e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e44: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x201e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x201e48: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x201e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x201e4c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x201e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x201e50: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x201e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x201e54: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x201e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x201e58: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x201e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x201e5c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x201e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x201e60: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x201e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x201e64: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x201e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x201e68: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x201E68u;
    {
        const bool branch_taken_0x201e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201e68) {
            ctx->pc = 0x201E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201E68u;
            // 0x201e6c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201F3Cu;
            goto label_201f3c;
        }
    }
    ctx->pc = 0x201E70u;
    // 0x201e70: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x201e70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x201e74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x201e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e78: 0x8e230894  lw          $v1, 0x894($s1)
    ctx->pc = 0x201e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x201e7c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x201e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x201e80: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x201e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x201e84: 0x8c740020  lw          $s4, 0x20($v1)
    ctx->pc = 0x201e84u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x201e88: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x201e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x201e8c: 0x92240196  lbu         $a0, 0x196($s1)
    ctx->pc = 0x201e8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 406)));
    // 0x201e90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x201e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x201e94: 0x26830070  addiu       $v1, $s4, 0x70
    ctx->pc = 0x201e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x201e98: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x201e98u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x201e9c: 0x26f7a540  addiu       $s7, $s7, -0x5AC0
    ctx->pc = 0x201e9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294944064));
    // 0x201ea0: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x201ea0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x201ea4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x201ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x201ea8: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x201EA8u;
    {
        const bool branch_taken_0x201ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EA8u;
        // 0x201eac: 0x24b60040  addiu       $s6, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ea8) {
            ctx->pc = 0x201F38u;
            goto label_201f38;
        }
    }
    ctx->pc = 0x201EB0u;
    // 0x201eb0: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x201eb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x201eb4: 0x139040  sll         $s2, $s3, 1
    ctx->pc = 0x201eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_201eb8:
    // 0x201eb8: 0x2561821  addu        $v1, $s2, $s6
    ctx->pc = 0x201eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x201ebc: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x201ebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x201ec0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x201EC0u;
    {
        const bool branch_taken_0x201ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201ec0) {
            ctx->pc = 0x201EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201EC0u;
            // 0x201ec4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201F2Cu;
            goto label_201f2c;
        }
    }
    ctx->pc = 0x201EC8u;
    // 0x201ec8: 0x90700000  lbu         $s0, 0x0($v1)
    ctx->pc = 0x201ec8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201ecc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ed0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x201ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ed4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x201ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ed8: 0xc080768  jal         func_201DA0
    ctx->pc = 0x201ED8u;
    SET_GPR_U32(ctx, 31, 0x201EE0u);
    ctx->pc = 0x201EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201ED8u;
    // 0x201edc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201DA0u, 0x201ED8u, 0x201EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201EE0u;
label_201ee0:
    // 0x201ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ee4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x201ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201ee8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201eec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x201eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ef0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x201ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201ef4: 0xc080734  jal         func_201CD0
    ctx->pc = 0x201EF4u;
    SET_GPR_U32(ctx, 31, 0x201EFCu);
    ctx->pc = 0x201EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201EF4u;
    // 0x201ef8: 0x7ea20000  sq          $v0, 0x0($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201CD0u, 0x201EF4u, 0x201EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201EFCu;
label_201efc:
    // 0x201efc: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x201efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x201f00: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x201f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x201f04: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x201f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x201f08: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x201f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201f0c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x201f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201f10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x201f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x201f14: 0x24420318  addiu       $v0, $v0, 0x318
    ctx->pc = 0x201f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 792));
    // 0x201f18: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x201f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x201f1c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x201f1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x201f20: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x201f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x201f24: 0x92240196  lbu         $a0, 0x196($s1)
    ctx->pc = 0x201f24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 406)));
    // 0x201f28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x201f28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_201f2c:
    // 0x201f2c: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x201f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x201f30: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x201F30u;
    {
        const bool branch_taken_0x201f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F30u;
        // 0x201f34: 0x139040  sll         $s2, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f30) {
            ctx->pc = 0x201EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201eb8;
        }
    }
    ctx->pc = 0x201F38u;
label_201f38:
    // 0x201f38: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x201f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_201f3c:
    // 0x201f3c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x201f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x201f40: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x201f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201f44: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x201f44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x201f48: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x201f48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201f4c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x201f4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x201f50: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x201f50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201f54: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x201f54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x201f58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x201f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x201F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F5Cu;
        // 0x201f60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201F64u;
    // 0x201f64: 0x0  nop
    ctx->pc = 0x201f64u;
    // NOP
    ctx->pc = 0x201f68u;
}
