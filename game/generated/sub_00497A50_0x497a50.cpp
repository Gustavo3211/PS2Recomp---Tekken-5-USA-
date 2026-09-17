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

// Function: sub_00497A50
// Address: 0x497a50 - 0x497d48
void sub_00497A50_0x497a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497A50_0x497a50");
#endif

    switch (ctx->pc) {
        case 0x497a60u: goto label_497a60;
        case 0x497a78u: goto label_497a78;
        case 0x497b34u: goto label_497b34;
        case 0x497ba0u: goto label_497ba0;
        case 0x497bc8u: goto label_497bc8;
        case 0x497ca4u: goto label_497ca4;
        case 0x497cfcu: goto label_497cfc;
        case 0x497d0cu: goto label_497d0c;
        default: break;
    }

    ctx->pc = 0x497a50u;

    // 0x497a50: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x497a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x497a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x497a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497a58: 0x3e00008  jr          $ra
    ctx->pc = 0x497A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A58u;
        // 0x497a5c: 0xa462f88a  sh          $v0, -0x776($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294965386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497A60u;
label_497a60:
    // 0x497a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x497a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x497a64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x497a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x497a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x497a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x497a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497a70: 0x8125e9e  j           func_497A78
    ctx->pc = 0x497A70u;
    ctx->pc = 0x497A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497A70u;
    // 0x497a74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x497A78u;
    goto label_497a78;
    ctx->pc = 0x497A78u;
label_497a78:
    // 0x497a78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x497a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x497a7c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x497a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x497a80: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x497a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x497a84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x497a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497a88: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x497a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x497a8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x497a8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497a90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x497a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x497a94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x497a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x497a98: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x497a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x497a9c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x497a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x497aa0: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x497AA0u;
    {
        const bool branch_taken_0x497aa0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x497AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497AA0u;
        // 0x497aa4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497aa0) {
            ctx->pc = 0x497AD8u;
            goto label_497ad8;
        }
    }
    ctx->pc = 0x497AA8u;
    // 0x497aa8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x497aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x497aac: 0x8443d60c  lh          $v1, -0x29F4($v0)
    ctx->pc = 0x497aacu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D60Cu));
    // 0x497ab0: 0x14600097  bnez        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x497AB0u;
    {
        const bool branch_taken_0x497ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x497AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497AB0u;
        // 0x497ab4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497ab0) {
            ctx->pc = 0x497D10u;
            goto label_497d10;
        }
    }
    ctx->pc = 0x497AB8u;
    // 0x497ab8: 0x3c150073  lui         $s5, 0x73
    ctx->pc = 0x497ab8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
    // 0x497abc: 0x26a2d680  addiu       $v0, $s5, -0x2980
    ctx->pc = 0x497abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956672));
    // 0x497ac0: 0x8443007c  lh          $v1, 0x7C($v0)
    ctx->pc = 0x497ac0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D6FCu));
    // 0x497ac4: 0x54600093  bnel        $v1, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x497AC4u;
    {
        const bool branch_taken_0x497ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x497ac4) {
            ctx->pc = 0x497AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x497AC4u;
            // 0x497ac8: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x497D14u;
            goto label_497d14;
        }
    }
    ctx->pc = 0x497ACCu;
    // 0x497acc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x497ACCu;
    {
        const bool branch_taken_0x497acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497ACCu;
        // 0x497ad0: 0x111c00  sll         $v1, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497acc) {
            ctx->pc = 0x497AE0u;
            goto label_497ae0;
        }
    }
    ctx->pc = 0x497AD4u;
    // 0x497ad4: 0x0  nop
    ctx->pc = 0x497ad4u;
    // NOP
label_497ad8:
    // 0x497ad8: 0x3c150073  lui         $s5, 0x73
    ctx->pc = 0x497ad8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
    // 0x497adc: 0x111c00  sll         $v1, $s1, 16
    ctx->pc = 0x497adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_497ae0:
    // 0x497ae0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x497ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x497ae4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x497ae4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x497ae8: 0x3624ffff  ori         $a0, $s1, 0xFFFF
    ctx->pc = 0x497ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x497aec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x497aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x497af0: 0x132c00  sll         $a1, $s3, 16
    ctx->pc = 0x497af0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x497af4: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x497af4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x497af8: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x497af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x497afc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x497afcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x497b00: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x497b00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x497b04: 0x26107d40  addiu       $s0, $s0, 0x7D40
    ctx->pc = 0x497b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32064));
    // 0x497b08: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x497b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x497b0c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x497B0Cu;
    {
        const bool branch_taken_0x497b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x497B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B0Cu;
        // 0x497b10: 0x26a2d680  addiu       $v0, $s5, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497b0c) {
            ctx->pc = 0x497B50u;
            goto label_497b50;
        }
    }
    ctx->pc = 0x497B14u;
    // 0x497b14: 0x24522214  addiu       $s2, $v0, 0x2214
    ctx->pc = 0x497b14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8724));
    // 0x497b18: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x497b18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x497b1c: 0x2c627f00  sltiu       $v0, $v1, 0x7F00
    ctx->pc = 0x497b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32512) ? 1 : 0);
    // 0x497b20: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x497B20u;
    {
        const bool branch_taken_0x497b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x497b20) {
            ctx->pc = 0x497B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x497B20u;
            // 0x497b24: 0x731023  subu        $v0, $v1, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x497B3Cu;
            goto label_497b3c;
        }
    }
    ctx->pc = 0x497B28u;
    // 0x497b28: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x497b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x497b2c: 0xc123bd2  jal         func_48EF48
    ctx->pc = 0x497B2Cu;
    SET_GPR_U32(ctx, 31, 0x497B34u);
    ctx->pc = 0x497B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497B2Cu;
    // 0x497b30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF48u, 0x497B2Cu, 0x497B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497B34u;
label_497b34:
    // 0x497b34: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x497b34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x497b38: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x497b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_497b3c:
    // 0x497b3c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x497b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x497b40: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x497B40u;
    {
        const bool branch_taken_0x497b40 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x497B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B40u;
        // 0x497b44: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497b40) {
            ctx->pc = 0x497B50u;
            goto label_497b50;
        }
    }
    ctx->pc = 0x497B48u;
    // 0x497b48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x497b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x497b4c: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x497b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_497b50:
    // 0x497b50: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x497b50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497b54: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x497b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x497b58: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x497b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x497b5c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x497b5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497b60: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x497b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x497b64: 0x3624ffff  ori         $a0, $s1, 0xFFFF
    ctx->pc = 0x497b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x497b68: 0x828824  and         $s1, $a0, $v0
    ctx->pc = 0x497b68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x497b6c: 0x3666ffff  ori         $a2, $s3, 0xFFFF
    ctx->pc = 0x497b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x497b70: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x497b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x497b74: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x497b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x497b78: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x497b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x497b7c: 0xc39824  and         $s3, $a2, $v1
    ctx->pc = 0x497b7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x497b80: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x497b80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x497b84: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x497b84u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497b88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x497B88u;
    {
        const bool branch_taken_0x497b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B88u;
        // 0x497b8c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497b88) {
            ctx->pc = 0x497BA0u;
            goto label_497ba0;
        }
    }
    ctx->pc = 0x497B90u;
    // 0x497b90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x497b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497b94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x497b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497b98: 0xc129ba6  jal         func_4A6E98
    ctx->pc = 0x497B98u;
    SET_GPR_U32(ctx, 31, 0x497BA0u);
    ctx->pc = 0x497B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497B98u;
    // 0x497b9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6E98u, 0x497B98u, 0x497BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497BA0u;
label_497ba0:
    // 0x497ba0: 0x26a2d680  addiu       $v0, $s5, -0x2980
    ctx->pc = 0x497ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956672));
    // 0x497ba4: 0x24522260  addiu       $s2, $v0, 0x2260
    ctx->pc = 0x497ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8800));
    // 0x497ba8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x497ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x497bac: 0x10540004  beq         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x497BACu;
    {
        const bool branch_taken_0x497bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x497BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497BACu;
        // 0x497bb0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497bac) {
            ctx->pc = 0x497BC0u;
            goto label_497bc0;
        }
    }
    ctx->pc = 0x497BB4u;
    // 0x497bb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x497BB4u;
    {
        const bool branch_taken_0x497bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497BB4u;
        // 0x497bb8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497bb4) {
            ctx->pc = 0x497BD4u;
            goto label_497bd4;
        }
    }
    ctx->pc = 0x497BBCu;
    // 0x497bbc: 0x0  nop
    ctx->pc = 0x497bbcu;
    // NOP
label_497bc0:
    // 0x497bc0: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x497BC0u;
    SET_GPR_U32(ctx, 31, 0x497BC8u);
    ctx->pc = 0x497BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497BC0u;
    // 0x497bc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x497BC0u, 0x497BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497BC8u;
label_497bc8:
    // 0x497bc8: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x497BC8u;
    {
        const bool branch_taken_0x497bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497BC8u;
        // 0x497bcc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497bc8) {
            ctx->pc = 0x497CFCu;
            goto label_497cfc;
        }
    }
    ctx->pc = 0x497BD0u;
    // 0x497bd0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x497bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_497bd4:
    // 0x497bd4: 0x240200d2  addiu       $v0, $zero, 0xD2
    ctx->pc = 0x497bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x497bd8: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x497bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x497bdc: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x497bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x497be0: 0x3626ffff  ori         $a2, $s1, 0xFFFF
    ctx->pc = 0x497be0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x497be4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x497be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497be8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x497be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497bec: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x497becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x497bf0: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x497bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x497bf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x497bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x497bf8: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x497bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x497bfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x497bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x497c00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x497c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x497c04: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x497c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x497c08: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x497c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497c0c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x497c0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497c10: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x497c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x497c14: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x497c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x497c18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x497c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x497c1c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x497c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x497c20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x497c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497c24: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x497c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x497c28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x497c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x497c2c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x497c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x497c30: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x497c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497c34: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x497c34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497c38: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x497c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x497c3c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x497c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x497c40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x497c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x497c44: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x497c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x497c48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x497c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497c4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x497c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x497c50: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x497c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x497c54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x497c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497c58: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x497c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x497c5c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x497c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x497c60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x497c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x497c64: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x497c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497c68: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x497c68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497c6c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x497c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x497c70: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x497c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x497c74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x497c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x497c78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x497c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x497c7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x497c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x497c80: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x497c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x497c84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x497c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x497c88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x497c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x497c8c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x497c8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497c90: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x497c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x497c94: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x497c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x497c98: 0xc28824  and         $s1, $a2, $v0
    ctx->pc = 0x497c98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x497c9c: 0xc129c54  jal         func_4A7150
    ctx->pc = 0x497C9Cu;
    SET_GPR_U32(ctx, 31, 0x497CA4u);
    ctx->pc = 0x497CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497C9Cu;
    // 0x497ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7150u, 0x497C9Cu, 0x497CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497CA4u;
label_497ca4:
    // 0x497ca4: 0x2322825  or          $a1, $s1, $s2
    ctx->pc = 0x497ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
    // 0x497ca8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x497ca8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497cac: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x497cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x497cb0: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x497cb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497cb4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x497cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x497cb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x497cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497cbc: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x497cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x497cc0: 0xa38824  and         $s1, $a1, $v1
    ctx->pc = 0x497cc0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x497cc4: 0x3622ffff  ori         $v0, $s1, 0xFFFF
    ctx->pc = 0x497cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x497cc8: 0x448824  and         $s1, $v0, $a0
    ctx->pc = 0x497cc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x497ccc: 0x620000b  bltz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x497CCCu;
    {
        const bool branch_taken_0x497ccc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x497CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497CCCu;
        // 0x497cd0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497ccc) {
            ctx->pc = 0x497CFCu;
            goto label_497cfc;
        }
    }
    ctx->pc = 0x497CD4u;
    // 0x497cd4: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x497cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497cd8: 0x2322824  and         $a1, $s1, $s2
    ctx->pc = 0x497cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 18));
    // 0x497cdc: 0x113400  sll         $a2, $s1, 16
    ctx->pc = 0x497cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x497ce0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x497ce0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x497ce4: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x497ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x497ce8: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x497ce8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x497cec: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x497cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x497cf0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x497cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x497cf4: 0xc123b78  jal         func_48EDE0
    ctx->pc = 0x497CF4u;
    SET_GPR_U32(ctx, 31, 0x497CFCu);
    ctx->pc = 0x497CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497CF4u;
    // 0x497cf8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EDE0u, 0x497CF4u, 0x497CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497CFCu;
label_497cfc:
    // 0x497cfc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x497cfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x497d00: 0x26a2d680  addiu       $v0, $s5, -0x2980
    ctx->pc = 0x497d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956672));
    // 0x497d04: 0xc123234  jal         func_48C8D0
    ctx->pc = 0x497D04u;
    SET_GPR_U32(ctx, 31, 0x497D0Cu);
    ctx->pc = 0x497D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497D04u;
    // 0x497d08: 0xa443007c  sh          $v1, 0x7C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 124), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C8D0u, 0x497D04u, 0x497D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497D0Cu;
label_497d0c:
    // 0x497d0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x497d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_497d10:
    // 0x497d10: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x497d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_497d14:
    // 0x497d14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x497d14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497d18: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x497d18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x497d1c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x497d1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x497d20: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x497d20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x497d24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x497d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x497d28: 0x3e00008  jr          $ra
    ctx->pc = 0x497D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D28u;
        // 0x497d2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497D30u;
    // 0x497d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x497d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x497d34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x497d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x497d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x497d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x497d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497d40: 0x8125e9e  j           func_497A78
    ctx->pc = 0x497D40u;
    ctx->pc = 0x497D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497D40u;
    // 0x497d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x497A78u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_497a78;
    ctx->pc = 0x497D48u;
}
