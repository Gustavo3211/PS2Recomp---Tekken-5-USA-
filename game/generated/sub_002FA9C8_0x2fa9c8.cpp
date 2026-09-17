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

// Function: sub_002FA9C8
// Address: 0x2fa9c8 - 0x2faae0
void sub_002FA9C8_0x2fa9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA9C8_0x2fa9c8");
#endif

    switch (ctx->pc) {
        case 0x2fa9fcu: goto label_2fa9fc;
        case 0x2faa34u: goto label_2faa34;
        case 0x2faa60u: goto label_2faa60;
        case 0x2faa80u: goto label_2faa80;
        default: break;
    }

    ctx->pc = 0x2fa9c8u;

    // 0x2fa9c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fa9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fa9cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fa9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa9d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fa9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2fa9d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2fa9d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa9d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fa9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fa9dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fa9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa9e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fa9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fa9e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fa9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fa9e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fa9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fa9ec: 0x12800033  beqz        $s4, . + 4 + (0x33 << 2)
    ctx->pc = 0x2FA9ECu;
    {
        const bool branch_taken_0x2fa9ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA9ECu;
        // 0x2fa9f0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa9ec) {
            ctx->pc = 0x2FAABCu;
            goto label_2faabc;
        }
    }
    ctx->pc = 0x2FA9F4u;
    // 0x2fa9f4: 0xc0bea5a  jal         func_2FA968
    ctx->pc = 0x2FA9F4u;
    SET_GPR_U32(ctx, 31, 0x2FA9FCu);
    ctx->pc = 0x2FA968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA968u, 0x2FA9F4u, 0x2FA9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA9FCu;
label_2fa9fc:
    // 0x2fa9fc: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x2fa9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x2faa00: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x2faa00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2faa04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAA04u;
    {
        const bool branch_taken_0x2faa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faa04) {
            ctx->pc = 0x2FAA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAA04u;
            // 0x2faa08: 0x96820006  lhu         $v0, 0x6($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAA18u;
            goto label_2faa18;
        }
    }
    ctx->pc = 0x2FAA0Cu;
    // 0x2faa0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FAA0Cu;
    {
        const bool branch_taken_0x2faa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA0Cu;
        // 0x2faa10: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa0c) {
            ctx->pc = 0x2FAA1Cu;
            goto label_2faa1c;
        }
    }
    ctx->pc = 0x2FAA14u;
    // 0x2faa14: 0x0  nop
    ctx->pc = 0x2faa14u;
    // NOP
label_2faa18:
    // 0x2faa18: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2faa18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2faa1c:
    // 0x2faa1c: 0x96920002  lhu         $s2, 0x2($s4)
    ctx->pc = 0x2faa1cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2faa20: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x2faa20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2faa24: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x2faa24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    // 0x2faa28: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2faa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2faa2c: 0xc0be9f0  jal         func_2FA7C0
    ctx->pc = 0x2FAA2Cu;
    SET_GPR_U32(ctx, 31, 0x2FAA34u);
    ctx->pc = 0x2FAA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA2Cu;
    // 0x2faa30: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA7C0u, 0x2FAA2Cu, 0x2FAA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA34u;
label_2faa34:
    // 0x2faa34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAA34u;
    {
        const bool branch_taken_0x2faa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA34u;
        // 0x2faa38: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa34) {
            ctx->pc = 0x2FAA48u;
            goto label_2faa48;
        }
    }
    ctx->pc = 0x2FAA3Cu;
    // 0x2faa3c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2FAA3Cu;
    {
        const bool branch_taken_0x2faa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA3Cu;
        // 0x2faa40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa3c) {
            ctx->pc = 0x2FAABCu;
            goto label_2faabc;
        }
    }
    ctx->pc = 0x2FAA44u;
    // 0x2faa44: 0x0  nop
    ctx->pc = 0x2faa44u;
    // NOP
label_2faa48:
    // 0x2faa48: 0x26930018  addiu       $s3, $s4, 0x18
    ctx->pc = 0x2faa48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x2faa4c: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FAA4Cu;
    {
        const bool branch_taken_0x2faa4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA4Cu;
        // 0x2faa50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa4c) {
            ctx->pc = 0x2FAA98u;
            goto label_2faa98;
        }
    }
    ctx->pc = 0x2FAA54u;
    // 0x2faa54: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2faa54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2faa58: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2faa58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2faa5c: 0x0  nop
    ctx->pc = 0x2faa5cu;
    // NOP
label_2faa60:
    // 0x2faa60: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2faa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2faa64: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2faa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2faa68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2faa68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2faa6c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2faa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2faa70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2faa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa74: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2faa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2faa78: 0xc0bea28  jal         func_2FA8A0
    ctx->pc = 0x2FAA78u;
    SET_GPR_U32(ctx, 31, 0x2FAA80u);
    ctx->pc = 0x2FAA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA78u;
    // 0x2faa7c: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA8A0u, 0x2FAA78u, 0x2FAA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA80u;
label_2faa80:
    // 0x2faa80: 0x1452000e  bne         $v0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2FAA80u;
    {
        const bool branch_taken_0x2faa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2FAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA80u;
        // 0x2faa84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa80) {
            ctx->pc = 0x2FAABCu;
            goto label_2faabc;
        }
    }
    ctx->pc = 0x2FAA88u;
    // 0x2faa88: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2faa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2faa8c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2faa8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2faa90: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2FAA90u;
    {
        const bool branch_taken_0x2faa90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA90u;
        // 0x2faa94: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa90) {
            ctx->pc = 0x2FAA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2faa60;
        }
    }
    ctx->pc = 0x2FAA98u;
label_2faa98:
    // 0x2faa98: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x2faa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2faa9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2faa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2faaa0: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x2faaa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2faaa4: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x2faaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2faaa8: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2faaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2faaac: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x2faaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2faab0: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x2faab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2faab4: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x2faab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2faab8: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2faab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_2faabc:
    // 0x2faabc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2faabcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2faac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2faac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2faac4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2faac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2faac8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2faac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2faacc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2faaccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2faad0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2faad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAD4u;
        // 0x2faad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAADCu;
    // 0x2faadc: 0x0  nop
    ctx->pc = 0x2faadcu;
    // NOP
    ctx->pc = 0x2faae0u;
}
