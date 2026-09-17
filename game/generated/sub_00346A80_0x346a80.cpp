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

// Function: sub_00346A80
// Address: 0x346a80 - 0x346ba0
void sub_00346A80_0x346a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346A80_0x346a80");
#endif

    switch (ctx->pc) {
        case 0x346ad4u: goto label_346ad4;
        case 0x346adcu: goto label_346adc;
        case 0x346af0u: goto label_346af0;
        case 0x346b18u: goto label_346b18;
        case 0x346b20u: goto label_346b20;
        case 0x346b30u: goto label_346b30;
        case 0x346b40u: goto label_346b40;
        case 0x346b58u: goto label_346b58;
        case 0x346b74u: goto label_346b74;
        default: break;
    }

    ctx->pc = 0x346a80u;

    // 0x346a80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x346a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x346a84: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x346a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x346a88: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x346a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x346a8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x346a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a90: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x346a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x346a94: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x346a94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a98: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x346a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x346a9c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x346a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x346aa0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x346aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x346aa4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x346aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x346aa8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x346aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x346aac: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x346aacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x346ab0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x346AB0u;
    {
        const bool branch_taken_0x346ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x346AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AB0u;
        // 0x346ab4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346ab0) {
            ctx->pc = 0x346AC8u;
            goto label_346ac8;
        }
    }
    ctx->pc = 0x346AB8u;
    // 0x346ab8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x346ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x346abc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346ABCu;
    {
        const bool branch_taken_0x346abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346ABCu;
        // 0x346ac0: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346abc) {
            ctx->pc = 0x346ACCu;
            goto label_346acc;
        }
    }
    ctx->pc = 0x346AC4u;
    // 0x346ac4: 0x0  nop
    ctx->pc = 0x346ac4u;
    // NOP
label_346ac8:
    // 0x346ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x346ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346acc:
    // 0x346acc: 0xc0d2536  jal         func_3494D8
    ctx->pc = 0x346ACCu;
    SET_GPR_U32(ctx, 31, 0x346AD4u);
    ctx->pc = 0x346AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346ACCu;
    // 0x346ad0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3494D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3494D8u, 0x346ACCu, 0x346AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346AD4u;
label_346ad4:
    // 0x346ad4: 0xc0d24b4  jal         func_3492D0
    ctx->pc = 0x346AD4u;
    SET_GPR_U32(ctx, 31, 0x346ADCu);
    ctx->pc = 0x346AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346AD4u;
    // 0x346ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3492D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3492D0u, 0x346AD4u, 0x346ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346ADCu;
label_346adc:
    // 0x346adc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x346ADCu;
    {
        const bool branch_taken_0x346adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346adc) {
            ctx->pc = 0x346AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346ADCu;
            // 0x346ae0: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346B00u;
            goto label_346b00;
        }
    }
    ctx->pc = 0x346AE4u;
    // 0x346ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ae8: 0xc0d2404  jal         func_349010
    ctx->pc = 0x346AE8u;
    SET_GPR_U32(ctx, 31, 0x346AF0u);
    ctx->pc = 0x346AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346AE8u;
    // 0x346aec: 0x94850002  lhu         $a1, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349010u, 0x346AE8u, 0x346AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346AF0u;
label_346af0:
    // 0x346af0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x346af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x346af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346af8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x346AF8u;
    {
        const bool branch_taken_0x346af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AF8u;
        // 0x346afc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346af8) {
            ctx->pc = 0x346B6Cu;
            goto label_346b6c;
        }
    }
    ctx->pc = 0x346B00u;
label_346b00:
    // 0x346b00: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x346b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x346b04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x346B04u;
    {
        const bool branch_taken_0x346b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B04u;
        // 0x346b08: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b04) {
            ctx->pc = 0x346B20u;
            goto label_346b20;
        }
    }
    ctx->pc = 0x346B0Cu;
    // 0x346b0c: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x346b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x346b10: 0xc0c89d4  jal         func_322750
    ctx->pc = 0x346B10u;
    SET_GPR_U32(ctx, 31, 0x346B18u);
    ctx->pc = 0x346B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346B10u;
    // 0x346b14: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x346B10u, 0x346B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B18u;
label_346b18:
    // 0x346b18: 0xc0d2582  jal         func_349608
    ctx->pc = 0x346B18u;
    SET_GPR_U32(ctx, 31, 0x346B20u);
    ctx->pc = 0x346B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346B18u;
    // 0x346b1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349608u, 0x346B18u, 0x346B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B20u;
label_346b20:
    // 0x346b20: 0x96320002  lhu         $s2, 0x2($s1)
    ctx->pc = 0x346b20u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x346b24: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x346b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x346b28: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x346B28u;
    {
        const bool branch_taken_0x346b28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x346B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B28u;
        // 0x346b2c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b28) {
            ctx->pc = 0x346B64u;
            goto label_346b64;
        }
    }
    ctx->pc = 0x346B30u;
label_346b30:
    // 0x346b30: 0xce000028  pref        0x00, 0x28($s0)
    ctx->pc = 0x346b30u;
    // PREF instruction (ignored)
    // 0x346b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b38: 0xc0d24f8  jal         func_3493E0
    ctx->pc = 0x346B38u;
    SET_GPR_U32(ctx, 31, 0x346B40u);
    ctx->pc = 0x346B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346B38u;
    // 0x346b3c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3493E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3493E0u, 0x346B38u, 0x346B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B40u;
label_346b40:
    // 0x346b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x346b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b48: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x346b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b4c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x346b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b50: 0xc0d1a64  jal         func_346990
    ctx->pc = 0x346B50u;
    SET_GPR_U32(ctx, 31, 0x346B58u);
    ctx->pc = 0x346B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346B50u;
    // 0x346b54: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346990u, 0x346B50u, 0x346B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B58u;
label_346b58:
    // 0x346b58: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x346b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x346b5c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x346B5Cu;
    {
        const bool branch_taken_0x346b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346b5c) {
            ctx->pc = 0x346B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346b30;
        }
    }
    ctx->pc = 0x346B64u;
label_346b64:
    // 0x346b64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x346b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x346b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_346b6c:
    // 0x346b6c: 0xc0d256c  jal         func_3495B0
    ctx->pc = 0x346B6Cu;
    SET_GPR_U32(ctx, 31, 0x346B74u);
    ctx->pc = 0x3495B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3495B0u, 0x346B6Cu, 0x346B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B74u;
label_346b74:
    // 0x346b74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x346b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b78: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x346b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x346b7c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x346b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346b80: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x346b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x346b84: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x346b84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x346b88: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x346b88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x346b8c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x346b8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x346b90: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x346b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x346b94: 0x3e00008  jr          $ra
    ctx->pc = 0x346B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B94u;
        // 0x346b98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346B9Cu;
    // 0x346b9c: 0x0  nop
    ctx->pc = 0x346b9cu;
    // NOP
    ctx->pc = 0x346ba0u;
}
