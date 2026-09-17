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

// Function: sub_002F6AD0
// Address: 0x2f6ad0 - 0x2f6bd8
void sub_002F6AD0_0x2f6ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6AD0_0x2f6ad0");
#endif

    switch (ctx->pc) {
        case 0x2f6b14u: goto label_2f6b14;
        case 0x2f6b3cu: goto label_2f6b3c;
        case 0x2f6b4cu: goto label_2f6b4c;
        case 0x2f6b7cu: goto label_2f6b7c;
        case 0x2f6b8cu: goto label_2f6b8c;
        case 0x2f6bbcu: goto label_2f6bbc;
        default: break;
    }

    ctx->pc = 0x2f6ad0u;

    // 0x2f6ad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f6ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f6ad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ad8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f6ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f6adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ae0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2f6ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2f6ae4: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x2f6ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x2f6ae8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f6ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f6aec: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x2f6aecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x2f6af0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2f6af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2f6af4: 0x3c1380df  lui         $s3, 0x80DF
    ctx->pc = 0x2f6af4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32991 << 16));
    // 0x2f6af8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f6af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f6afc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b00: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2f6b00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x2f6b04: 0x26311880  addiu       $s1, $s1, 0x1880
    ctx->pc = 0x2f6b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6272));
    // 0x2f6b08: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2f6b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2f6b0c: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x2F6B0Cu;
    SET_GPR_U32(ctx, 31, 0x2F6B14u);
    ctx->pc = 0x2F6B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B0Cu;
    // 0x2f6b10: 0x3673cfcf  ori         $s3, $s3, 0xCFCF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)53199);
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2F6B0Cu, 0x2F6B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B14u;
label_2f6b14:
    // 0x2f6b14: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x2f6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2f6b18: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2f6b18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f6b1c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f6b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b20: 0x262380b  movn        $a3, $s3, $v0
    ctx->pc = 0x2f6b20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 19));
    // 0x2f6b24: 0x3c090010  lui         $t1, 0x10
    ctx->pc = 0x2f6b24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16 << 16));
    // 0x2f6b28: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x2f6b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x2f6b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b34: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2F6B34u;
    SET_GPR_U32(ctx, 31, 0x2F6B3Cu);
    ctx->pc = 0x2F6B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B34u;
    // 0x2f6b38: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2F6B34u, 0x2F6B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B3Cu;
label_2f6b3c:
    // 0x2f6b3c: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x2f6b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2f6b40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b44: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x2F6B44u;
    SET_GPR_U32(ctx, 31, 0x2F6B4Cu);
    ctx->pc = 0x2F6B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B44u;
    // 0x2f6b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2F6B44u, 0x2F6B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B4Cu;
label_2f6b4c:
    // 0x2f6b4c: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x2f6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2f6b50: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2f6b50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f6b54: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f6b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f6b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f6b5c: 0x3c090010  lui         $t1, 0x10
    ctx->pc = 0x2f6b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16 << 16));
    // 0x2f6b60: 0x262380b  movn        $a3, $s3, $v0
    ctx->pc = 0x2f6b60u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 19));
    // 0x2f6b64: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x2f6b64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x2f6b68: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x2f6b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x2f6b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b74: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2F6B74u;
    SET_GPR_U32(ctx, 31, 0x2F6B7Cu);
    ctx->pc = 0x2F6B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B74u;
    // 0x2f6b78: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2F6B74u, 0x2F6B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B7Cu;
label_2f6b7c:
    // 0x2f6b7c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2f6b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f6b80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b84: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x2F6B84u;
    SET_GPR_U32(ctx, 31, 0x2F6B8Cu);
    ctx->pc = 0x2F6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B84u;
    // 0x2f6b88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2F6B84u, 0x2F6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B8Cu;
label_2f6b8c:
    // 0x2f6b8c: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x2f6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2f6b90: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2f6b90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f6b94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f6b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b98: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2f6b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2f6b9c: 0x3c090010  lui         $t1, 0x10
    ctx->pc = 0x2f6b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16 << 16));
    // 0x2f6ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ba4: 0x262380b  movn        $a3, $s3, $v0
    ctx->pc = 0x2f6ba4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 19));
    // 0x2f6ba8: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x2f6ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x2f6bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bb0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f6bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6bb4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2F6BB4u;
    SET_GPR_U32(ctx, 31, 0x2F6BBCu);
    ctx->pc = 0x2F6BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6BB4u;
    // 0x2f6bb8: 0x35290002  ori         $t1, $t1, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2F6BB4u, 0x2F6BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6BBCu;
label_2f6bbc:
    // 0x2f6bbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f6bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6bc0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f6bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f6bc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f6bc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6bc8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2f6bc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f6bcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f6bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BD0u;
        // 0x2f6bd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6BD8u;
}
