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

// Function: sub_00323E30
// Address: 0x323e30 - 0x3240f0
void sub_00323E30_0x323e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323E30_0x323e30");
#endif

    switch (ctx->pc) {
        case 0x323e4cu: goto label_323e4c;
        case 0x323e54u: goto label_323e54;
        case 0x323ebcu: goto label_323ebc;
        case 0x323ed0u: goto label_323ed0;
        case 0x323efcu: goto label_323efc;
        case 0x323f0cu: goto label_323f0c;
        case 0x323f28u: goto label_323f28;
        case 0x323f98u: goto label_323f98;
        case 0x324018u: goto label_324018;
        case 0x32403cu: goto label_32403c;
        case 0x324054u: goto label_324054;
        case 0x324068u: goto label_324068;
        default: break;
    }

    ctx->pc = 0x323e30u;

    // 0x323e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323e34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323e38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323e40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323e44: 0xc0cb186  jal         func_32C618
    ctx->pc = 0x323E44u;
    SET_GPR_U32(ctx, 31, 0x323E4Cu);
    ctx->pc = 0x323E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323E44u;
    // 0x323e48: 0x8e300428  lw          $s0, 0x428($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C618u, 0x323E44u, 0x323E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E4Cu;
label_323e4c:
    // 0x323e4c: 0xc0cb186  jal         func_32C618
    ctx->pc = 0x323E4Cu;
    SET_GPR_U32(ctx, 31, 0x323E54u);
    ctx->pc = 0x323E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323E4Cu;
    // 0x323e50: 0x26240200  addiu       $a0, $s1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C618u, 0x323E4Cu, 0x323E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E54u;
label_323e54:
    // 0x323e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e58: 0x26270400  addiu       $a3, $s1, 0x400
    ctx->pc = 0x323e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x323e5c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x323e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x323e60: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x323E60u;
    {
        const bool branch_taken_0x323e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323E60u;
        // 0x323e64: 0x26260410  addiu       $a2, $s1, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323e60) {
            ctx->pc = 0x323EB4u;
            goto label_323eb4;
        }
    }
    ctx->pc = 0x323E68u;
    // 0x323e68: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x323e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x323e6c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x323E6Cu;
    {
        const bool branch_taken_0x323e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323e6c) {
            ctx->pc = 0x323EB4u;
            goto label_323eb4;
        }
    }
    ctx->pc = 0x323E74u;
    // 0x323e74: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x323e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x323e78: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x323e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x323e7c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x323e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x323e80: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x323e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x323e84: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x323e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x323e88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x323e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x323e8c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x323e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x323e90: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x323e90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x323e94: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x323e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x323e98: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x323e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x323e9c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x323e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x323ea0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323ea4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x323ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x323ea8: 0xacc60004  sw          $a2, 0x4($a2)
    ctx->pc = 0x323ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 6));
    // 0x323eac: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x323eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x323eb0: 0xacc60000  sw          $a2, 0x0($a2)
    ctx->pc = 0x323eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 6));
label_323eb4:
    // 0x323eb4: 0xc0d01d6  jal         func_340758
    ctx->pc = 0x323EB4u;
    SET_GPR_U32(ctx, 31, 0x323EBCu);
    ctx->pc = 0x323EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323EB4u;
    // 0x323eb8: 0x8e250424  lw          $a1, 0x424($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340758u, 0x323EB4u, 0x323EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323EBCu;
label_323ebc:
    // 0x323ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x323EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EC8u;
        // 0x323ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323ED0u;
label_323ed0:
    // 0x323ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x323ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x323ed4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x323ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x323ed8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x323ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323edc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x323edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x323ee0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x323ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ee4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x323ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ee8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x323ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x323eec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x323eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x323ef0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x323ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x323ef4: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x323EF4u;
    SET_GPR_U32(ctx, 31, 0x323EFCu);
    ctx->pc = 0x323EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323EF4u;
    // 0x323ef8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x323EF4u, 0x323EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323EFCu;
label_323efc:
    // 0x323efc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x323EFCu;
    {
        const bool branch_taken_0x323efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323efc) {
            ctx->pc = 0x323F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323EFCu;
            // 0x323f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323F18u;
            goto label_323f18;
        }
    }
    ctx->pc = 0x323F04u;
    // 0x323f04: 0xc0d01fc  jal         func_3407F0
    ctx->pc = 0x323F04u;
    SET_GPR_U32(ctx, 31, 0x323F0Cu);
    ctx->pc = 0x323F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323F04u;
    // 0x323f08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3407F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3407F0u, 0x323F04u, 0x323F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323F0Cu;
label_323f0c:
    // 0x323f0c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x323F0Cu;
    {
        const bool branch_taken_0x323f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F0Cu;
        // 0x323f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f0c) {
            ctx->pc = 0x323FFCu;
            goto label_323ffc;
        }
    }
    ctx->pc = 0x323F14u;
    // 0x323f14: 0x0  nop
    ctx->pc = 0x323f14u;
    // NOP
label_323f18:
    // 0x323f18: 0x26500410  addiu       $s0, $s2, 0x410
    ctx->pc = 0x323f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1040));
    // 0x323f1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x323f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f20: 0xc0d01e2  jal         func_340788
    ctx->pc = 0x323F20u;
    SET_GPR_U32(ctx, 31, 0x323F28u);
    ctx->pc = 0x323F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323F20u;
    // 0x323f24: 0x26510400  addiu       $s1, $s2, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340788u, 0x323F20u, 0x323F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323F28u;
label_323f28:
    // 0x323f28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x323f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x323f2c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x323f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x323f30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x323f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x323f34: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x323f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x323f38: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x323f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x323f3c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x323f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x323f40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x323f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323f44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x323f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x323f48: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x323f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x323f4c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x323f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x323f50: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x323f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x323f54: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x323F54u;
    {
        const bool branch_taken_0x323f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323f54) {
            ctx->pc = 0x323F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323F54u;
            // 0x323f58: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323F68u;
            goto label_323f68;
        }
    }
    ctx->pc = 0x323F5Cu;
    // 0x323f5c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x323f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x323f60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x323F60u;
    {
        const bool branch_taken_0x323f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F60u;
        // 0x323f64: 0xacb00004  sw          $s0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f60) {
            ctx->pc = 0x323F74u;
            goto label_323f74;
        }
    }
    ctx->pc = 0x323F68u;
label_323f68:
    // 0x323f68: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x323f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x323f6c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x323f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x323f70: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x323f70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_323f74:
    // 0x323f74: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x323f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x323f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x323f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f7c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x323f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x323f80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x323f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f84: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x323f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x323f88: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x323f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323f8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x323f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x323f90: 0xc0cb1a6  jal         func_32C698
    ctx->pc = 0x323F90u;
    SET_GPR_U32(ctx, 31, 0x323F98u);
    ctx->pc = 0x323F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323F90u;
    // 0x323f94: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C698u, 0x323F90u, 0x323F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323F98u;
label_323f98:
    // 0x323f98: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x323F98u;
    {
        const bool branch_taken_0x323f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F98u;
        // 0x323f9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f98) {
            ctx->pc = 0x323FFCu;
            goto label_323ffc;
        }
    }
    ctx->pc = 0x323FA0u;
    // 0x323fa0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x323fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x323fa4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x323fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x323fa8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x323fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x323fac: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x323facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x323fb0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x323fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x323fb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x323fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x323fb8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x323fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x323fbc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x323fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x323fc0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x323FC0u;
    {
        const bool branch_taken_0x323fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323fc0) {
            ctx->pc = 0x323FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323FC0u;
            // 0x323fc4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323FD8u;
            goto label_323fd8;
        }
    }
    ctx->pc = 0x323FC8u;
    // 0x323fc8: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x323fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x323fcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x323FCCu;
    {
        const bool branch_taken_0x323fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323FCCu;
        // 0x323fd0: 0xac910000  sw          $s1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323fcc) {
            ctx->pc = 0x323FE4u;
            goto label_323fe4;
        }
    }
    ctx->pc = 0x323FD4u;
    // 0x323fd4: 0x0  nop
    ctx->pc = 0x323fd4u;
    // NOP
label_323fd8:
    // 0x323fd8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x323fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x323fdc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x323fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x323fe0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x323fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_323fe4:
    // 0x323fe4: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x323fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x323fe8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x323fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323fec: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x323fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x323ff0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x323ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x323ff4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x323ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x323ff8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x323ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_323ffc:
    // 0x323ffc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x323ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324000: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x324000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x324004: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x324004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324008: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x324008u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32400c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32400cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324010: 0x3e00008  jr          $ra
    ctx->pc = 0x324010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324010u;
        // 0x324014: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324018u;
label_324018:
    // 0x324018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x324018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32401c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32401cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x324020: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x324020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324024: 0x26440200  addiu       $a0, $s2, 0x200
    ctx->pc = 0x324024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x324028: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x324028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x32402c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32402cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x324030: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x324030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x324034: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x324034u;
    SET_GPR_U32(ctx, 31, 0x32403Cu);
    ctx->pc = 0x324038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324034u;
    // 0x324038: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x324034u, 0x32403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32403Cu;
label_32403c:
    // 0x32403c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32403cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324044: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x324044u;
    {
        const bool branch_taken_0x324044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x324048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324044u;
        // 0x324048: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324044) {
            ctx->pc = 0x324060u;
            goto label_324060;
        }
    }
    ctx->pc = 0x32404Cu;
    // 0x32404c: 0xc0d01fc  jal         func_3407F0
    ctx->pc = 0x32404Cu;
    SET_GPR_U32(ctx, 31, 0x324054u);
    ctx->pc = 0x324050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32404Cu;
    // 0x324050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3407F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3407F0u, 0x32404Cu, 0x324054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324054u;
label_324054:
    // 0x324054: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x324054u;
    {
        const bool branch_taken_0x324054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324054u;
        // 0x324058: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324054) {
            ctx->pc = 0x3240D4u;
            goto label_3240d4;
        }
    }
    ctx->pc = 0x32405Cu;
    // 0x32405c: 0x0  nop
    ctx->pc = 0x32405cu;
    // NOP
label_324060:
    // 0x324060: 0xc0d01e2  jal         func_340788
    ctx->pc = 0x324060u;
    SET_GPR_U32(ctx, 31, 0x324068u);
    ctx->pc = 0x340788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340788u, 0x324060u, 0x324068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324068u;
label_324068:
    // 0x324068: 0x26440400  addiu       $a0, $s2, 0x400
    ctx->pc = 0x324068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x32406c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x32406cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x324070: 0x26460410  addiu       $a2, $s2, 0x410
    ctx->pc = 0x324070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1040));
    // 0x324074: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x324074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x324078: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x324078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32407c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x32407cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x324080: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x324080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x324084: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x324084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x324088: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x324088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32408c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x324090: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x324090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x324094: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x324094u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x324098: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x324098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x32409c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32409Cu;
    {
        const bool branch_taken_0x32409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32409c) {
            ctx->pc = 0x3240A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32409Cu;
            // 0x3240a0: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3240B0u;
            goto label_3240b0;
        }
    }
    ctx->pc = 0x3240A4u;
    // 0x3240a4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x3240a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x3240a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3240A8u;
    {
        const bool branch_taken_0x3240a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3240ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3240A8u;
        // 0x3240ac: 0xaca60004  sw          $a2, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3240a8) {
            ctx->pc = 0x3240BCu;
            goto label_3240bc;
        }
    }
    ctx->pc = 0x3240B0u;
label_3240b0:
    // 0x3240b0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3240b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3240b4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3240b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3240b8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3240b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_3240bc:
    // 0x3240bc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x3240bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x3240c0: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x3240c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x3240c4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x3240c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3240c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3240c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3240cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3240ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3240d0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x3240d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_3240d4:
    // 0x3240d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3240d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3240d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3240d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3240dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3240dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3240e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3240e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3240e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3240E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3240E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3240E4u;
        // 0x3240e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3240E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3240ECu;
    // 0x3240ec: 0x0  nop
    ctx->pc = 0x3240ecu;
    // NOP
    ctx->pc = 0x3240f0u;
}
