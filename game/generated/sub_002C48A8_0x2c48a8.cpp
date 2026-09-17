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

// Function: sub_002C48A8
// Address: 0x2c48a8 - 0x2c4bb8
void sub_002C48A8_0x2c48a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C48A8_0x2c48a8");
#endif

    switch (ctx->pc) {
        case 0x2c4930u: goto label_2c4930;
        case 0x2c49b0u: goto label_2c49b0;
        case 0x2c49f8u: goto label_2c49f8;
        case 0x2c4a20u: goto label_2c4a20;
        case 0x2c4a48u: goto label_2c4a48;
        case 0x2c4a78u: goto label_2c4a78;
        case 0x2c4a98u: goto label_2c4a98;
        case 0x2c4ae0u: goto label_2c4ae0;
        case 0x2c4ae8u: goto label_2c4ae8;
        default: break;
    }

    ctx->pc = 0x2c48a8u;

    // 0x2c48a8: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2c48a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2c48ac: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2c48acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2c48b0: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x2c48b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x2c48b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c48b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48b8: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x2c48b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x2c48bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c48bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48c0: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x2c48c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x2c48c4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2c48c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48c8: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x2c48c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x2c48cc: 0x260a000f  addiu       $t2, $s0, 0xF
    ctx->pc = 0x2c48ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x2c48d0: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x2c48d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
    // 0x2c48d4: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x2c48d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x2c48d8: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x2c48d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x2c48dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c48dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48e0: 0x8f86bb04  lw          $a2, -0x44FC($gp)
    ctx->pc = 0x2c48e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949636)));
    // 0x2c48e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c48e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48e8: 0x96330024  lhu         $s3, 0x24($s1)
    ctx->pc = 0x2c48e8u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2c48ec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2c48ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48f0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2c48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2c48f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2c48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2c48f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c48fc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2c48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2c4900: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c4900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4904: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c4904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c4908: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2c4908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2c490c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x2c490cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2c4910: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C4910u;
    {
        const bool branch_taken_0x2c4910 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2C4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4910u;
        // 0x2c4914: 0x2c690001  sltiu       $t1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4910) {
            ctx->pc = 0x2C4958u;
            goto label_2c4958;
        }
    }
    ctx->pc = 0x2C4918u;
    // 0x2c4918: 0x8f86cb08  lw          $a2, -0x34F8($gp)
    ctx->pc = 0x2c4918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953736)));
    // 0x2c491c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2c491cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c4920: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c4920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c4924: 0x50a2000c  beql        $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C4924u;
    {
        const bool branch_taken_0x2c4924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4924) {
            ctx->pc = 0x2C4928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4924u;
            // 0x2c4928: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4958u;
            goto label_2c4958;
        }
    }
    ctx->pc = 0x2C492Cu;
    // 0x2c492c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c492cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c4930:
    // 0x2c4930: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x2c4930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2c4934: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4934u;
    {
        const bool branch_taken_0x2c4934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4934u;
        // 0x2c4938: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4934) {
            ctx->pc = 0x2C4958u;
            goto label_2c4958;
        }
    }
    ctx->pc = 0x2C493Cu;
    // 0x2c493c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2c493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c4940: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c4940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4944: 0x0  nop
    ctx->pc = 0x2c4944u;
    // NOP
    // 0x2c4948: 0x0  nop
    ctx->pc = 0x2c4948u;
    // NOP
    // 0x2c494c: 0x54a3fff8  bnel        $a1, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C494Cu;
    {
        const bool branch_taken_0x2c494c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c494c) {
            ctx->pc = 0x2C4950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C494Cu;
            // 0x2c4950: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4930;
        }
    }
    ctx->pc = 0x2C4954u;
    // 0x2c4954: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c4954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4958:
    // 0x2c4958: 0x1500008e  bnez        $t0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2C4958u;
    {
        const bool branch_taken_0x2c4958 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4958u;
        // 0x2c495c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4958) {
            ctx->pc = 0x2C4B94u;
            goto label_2c4b94;
        }
    }
    ctx->pc = 0x2C4960u;
    // 0x2c4960: 0x5520008d  bnel        $t1, $zero, . + 4 + (0x8D << 2)
    ctx->pc = 0x2C4960u;
    {
        const bool branch_taken_0x2c4960 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4960) {
            ctx->pc = 0x2C4964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4960u;
            // 0x2c4964: 0xdfb00170  ld          $s0, 0x170($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4B98u;
            goto label_2c4b98;
        }
    }
    ctx->pc = 0x2C4968u;
    // 0x2c4968: 0x8f82cb08  lw          $v0, -0x34F8($gp)
    ctx->pc = 0x2c4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953736)));
    // 0x2c496c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2c496cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2c4970: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2c4970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c4974: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2c4974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2c4978: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c497c: 0x1438024  and         $s0, $t2, $v1
    ctx->pc = 0x2c497cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x2c4980: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2c4980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2c4984: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2c4984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c4988: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c4988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c498c: 0x8f82bb04  lw          $v0, -0x44FC($gp)
    ctx->pc = 0x2c498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949636)));
    // 0x2c4990: 0x8f83cb08  lw          $v1, -0x34F8($gp)
    ctx->pc = 0x2c4990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953736)));
    // 0x2c4994: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c4994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c4998: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c4998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c499c: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x2c499cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x2c49a0: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x2c49a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x2c49a4: 0x12600077  beqz        $s3, . + 4 + (0x77 << 2)
    ctx->pc = 0x2C49A4u;
    {
        const bool branch_taken_0x2c49a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C49A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49A4u;
        // 0x2c49a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49a4) {
            ctx->pc = 0x2C4B84u;
            goto label_2c4b84;
        }
    }
    ctx->pc = 0x2C49ACu;
    // 0x2c49ac: 0x0  nop
    ctx->pc = 0x2c49acu;
    // NOP
label_2c49b0:
    // 0x2c49b0: 0x8e820898  lw          $v0, 0x898($s4)
    ctx->pc = 0x2c49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2200)));
    // 0x2c49b4: 0x9442006c  lhu         $v0, 0x6C($v0)
    ctx->pc = 0x2c49b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2c49b8: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x2c49b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c49bc: 0x5060003b  beql        $v1, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C49BCu;
    {
        const bool branch_taken_0x2c49bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49bc) {
            ctx->pc = 0x2C49C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C49BCu;
            // 0x2c49c0: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4AACu;
            goto label_2c4aac;
        }
    }
    ctx->pc = 0x2C49C4u;
    // 0x2c49c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c49c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c49c8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2c49c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2c49cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c49d0: 0x8c63e1e0  lw          $v1, -0x1E20($v1)
    ctx->pc = 0x2c49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959584)));
    // 0x2c49d4: 0x600008  jr          $v1
    ctx->pc = 0x2C49D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C49E0u: goto label_2c49e0;
            case 0x2C4A08u: goto label_2c4a08;
            case 0x2C4A30u: goto label_2c4a30;
            case 0x2C4A58u: goto label_2c4a58;
            case 0x2C4A80u: goto label_2c4a80;
            case 0x2C4AA8u: goto label_2c4aa8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C49D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C49DCu;
    // 0x2c49dc: 0x0  nop
    ctx->pc = 0x2c49dcu;
    // NOP
label_2c49e0:
    // 0x2c49e0: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x2c49e0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c49e4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c49e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c49e8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c49e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c49ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c49ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c49f0: 0xc0b1dca  jal         func_2C7728
    ctx->pc = 0x2C49F0u;
    SET_GPR_U32(ctx, 31, 0x2C49F8u);
    ctx->pc = 0x2C49F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C49F0u;
    // 0x2c49f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7728u, 0x2C49F0u, 0x2C49F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C49F8u;
label_2c49f8:
    // 0x2c49f8: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x2c49f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c49fc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2C49FCu;
    {
        const bool branch_taken_0x2c49fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49FCu;
        // 0x2c4a00: 0x240bfffc  addiu       $t3, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49fc) {
            ctx->pc = 0x2C4AB0u;
            goto label_2c4ab0;
        }
    }
    ctx->pc = 0x2C4A04u;
    // 0x2c4a04: 0x0  nop
    ctx->pc = 0x2c4a04u;
    // NOP
label_2c4a08:
    // 0x2c4a08: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x2c4a08u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c4a0c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c4a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c4a10: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c4a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c4a14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a18: 0xc0b1dca  jal         func_2C7728
    ctx->pc = 0x2C4A18u;
    SET_GPR_U32(ctx, 31, 0x2C4A20u);
    ctx->pc = 0x2C4A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A18u;
    // 0x2c4a1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7728u, 0x2C4A18u, 0x2C4A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A20u;
label_2c4a20:
    // 0x2c4a20: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x2c4a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2c4a24: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C4A24u;
    {
        const bool branch_taken_0x2c4a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A24u;
        // 0x2c4a28: 0x240bfffc  addiu       $t3, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a24) {
            ctx->pc = 0x2C4AB0u;
            goto label_2c4ab0;
        }
    }
    ctx->pc = 0x2C4A2Cu;
    // 0x2c4a2c: 0x0  nop
    ctx->pc = 0x2c4a2cu;
    // NOP
label_2c4a30:
    // 0x2c4a30: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x2c4a30u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c4a34: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c4a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c4a38: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c4a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c4a3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a40: 0xc0b1dca  jal         func_2C7728
    ctx->pc = 0x2C4A40u;
    SET_GPR_U32(ctx, 31, 0x2C4A48u);
    ctx->pc = 0x2C4A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A40u;
    // 0x2c4a44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7728u, 0x2C4A40u, 0x2C4A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A48u;
label_2c4a48:
    // 0x2c4a48: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2c4a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c4a4c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C4A4Cu;
    {
        const bool branch_taken_0x2c4a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A4Cu;
        // 0x2c4a50: 0x240bfffc  addiu       $t3, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a4c) {
            ctx->pc = 0x2C4AB0u;
            goto label_2c4ab0;
        }
    }
    ctx->pc = 0x2C4A54u;
    // 0x2c4a54: 0x0  nop
    ctx->pc = 0x2c4a54u;
    // NOP
label_2c4a58:
    // 0x2c4a58: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x2c4a58u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c4a5c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c4a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c4a60: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x2c4a60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2c4a64: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c4a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c4a68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a6c: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x2c4a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2c4a70: 0xc096d52  jal         func_25B548
    ctx->pc = 0x2C4A70u;
    SET_GPR_U32(ctx, 31, 0x2C4A78u);
    ctx->pc = 0x2C4A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A70u;
    // 0x2c4a74: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B548u, 0x2C4A70u, 0x2C4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A78u;
label_2c4a78:
    // 0x2c4a78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C4A78u;
    {
        const bool branch_taken_0x2c4a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A78u;
        // 0x2c4a7c: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a78) {
            ctx->pc = 0x2C4AACu;
            goto label_2c4aac;
        }
    }
    ctx->pc = 0x2C4A80u;
label_2c4a80:
    // 0x2c4a80: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x2c4a80u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c4a84: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c4a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c4a88: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c4a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c4a8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a90: 0xc0b1dca  jal         func_2C7728
    ctx->pc = 0x2C4A90u;
    SET_GPR_U32(ctx, 31, 0x2C4A98u);
    ctx->pc = 0x2C4A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A90u;
    // 0x2c4a94: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7728u, 0x2C4A90u, 0x2C4A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A98u;
label_2c4a98:
    // 0x2c4a98: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c4a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c4a9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4A9Cu;
    {
        const bool branch_taken_0x2c4a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A9Cu;
        // 0x2c4aa0: 0x240bfffc  addiu       $t3, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a9c) {
            ctx->pc = 0x2C4AB0u;
            goto label_2c4ab0;
        }
    }
    ctx->pc = 0x2C4AA4u;
    // 0x2c4aa4: 0x0  nop
    ctx->pc = 0x2c4aa4u;
    // NOP
label_2c4aa8:
    // 0x2c4aa8: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2c4aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2c4aac:
    // 0x2c4aac: 0x240bffbc  addiu       $t3, $zero, -0x44
    ctx->pc = 0x2c4aacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
label_2c4ab0:
    // 0x2c4ab0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2c4ab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ab4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c4ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ab8: 0x10e0002d  beqz        $a3, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C4AB8u;
    {
        const bool branch_taken_0x2c4ab8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AB8u;
        // 0x2c4abc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ab8) {
            ctx->pc = 0x2C4B70u;
            goto label_2c4b70;
        }
    }
    ctx->pc = 0x2C4AC0u;
    // 0x2c4ac0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4ac4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c4ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c4ac8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2c4ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4acc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c4accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c4ad0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c4ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c4ad4: 0xc781931c  lwc1        $f1, -0x6CE4($gp)
    ctx->pc = 0x2c4ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4ad8: 0x10a1004  sllv        $v0, $t2, $t0
    ctx->pc = 0x2c4ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 8) & 0x1F));
    // 0x2c4adc: 0x0  nop
    ctx->pc = 0x2c4adcu;
    // NOP
label_2c4ae0:
    // 0x2c4ae0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c4ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ae4: 0x1624824  and         $t1, $t3, $v0
    ctx->pc = 0x2c4ae4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
label_2c4ae8:
    // 0x2c4ae8: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C4AE8u;
    {
        const bool branch_taken_0x2c4ae8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AE8u;
        // 0x2c4aec: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ae8) {
            ctx->pc = 0x2C4B38u;
            goto label_2c4b38;
        }
    }
    ctx->pc = 0x2C4AF0u;
    // 0x2c4af0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c4af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4af4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2c4af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2c4af8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2c4af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4afc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4AFCu;
    {
        const bool branch_taken_0x2c4afc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AFCu;
        // 0x2c4b00: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4afc) {
            ctx->pc = 0x2C4B0Cu;
            goto label_2c4b0c;
        }
    }
    ctx->pc = 0x2C4B04u;
    // 0x2c4b04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4b08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4b0c:
    // 0x2c4b0c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c4b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4b10: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4B10u;
    {
        const bool branch_taken_0x2c4b10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4b10) {
            ctx->pc = 0x2C4B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4B10u;
            // 0x2c4b14: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4B24u;
            goto label_2c4b24;
        }
    }
    ctx->pc = 0x2C4B18u;
    // 0x2c4b18: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c4b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c4b1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4b20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c4b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2c4b24:
    // 0x2c4b24: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c4b24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2c4b28: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x2c4b28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c4b2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4B2Cu;
    {
        const bool branch_taken_0x2c4b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B2Cu;
        // 0x2c4b30: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b2c) {
            ctx->pc = 0x2C4B50u;
            goto label_2c4b50;
        }
    }
    ctx->pc = 0x2C4B34u;
    // 0x2c4b34: 0x0  nop
    ctx->pc = 0x2c4b34u;
    // NOP
label_2c4b38:
    // 0x2c4b38: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c4b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4b3c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2c4b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2c4b40: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c4b40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2c4b44: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x2c4b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c4b48: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2c4b48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c4b4c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2c4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2c4b50:
    // 0x2c4b50: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c4b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c4b54: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2c4b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c4b58: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2C4B58u;
    {
        const bool branch_taken_0x2c4b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4b58) {
            ctx->pc = 0x2C4AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4ae8;
        }
    }
    ctx->pc = 0x2C4B60u;
    // 0x2c4b60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2c4b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2c4b64: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x2c4b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2c4b68: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2C4B68u;
    {
        const bool branch_taken_0x2c4b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B68u;
        // 0x2c4b6c: 0x10a1004  sllv        $v0, $t2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b68) {
            ctx->pc = 0x2C4AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4ae0;
        }
    }
    ctx->pc = 0x2C4B70u;
label_2c4b70:
    // 0x2c4b70: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2c4b70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2c4b74: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2c4b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2c4b78: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x2c4b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2c4b7c: 0x1460ff8c  bnez        $v1, . + 4 + (-0x74 << 2)
    ctx->pc = 0x2C4B7Cu;
    {
        const bool branch_taken_0x2c4b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B7Cu;
        // 0x2c4b80: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b7c) {
            ctx->pc = 0x2C49B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c49b0;
        }
    }
    ctx->pc = 0x2C4B84u;
label_2c4b84:
    // 0x2c4b84: 0x8f82bb04  lw          $v0, -0x44FC($gp)
    ctx->pc = 0x2c4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949636)));
    // 0x2c4b88: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2c4b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c4b8c: 0xaf86bb04  sw          $a2, -0x44FC($gp)
    ctx->pc = 0x2c4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949636), GPR_U32(ctx, 6));
    // 0x2c4b90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c4b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4b94:
    // 0x2c4b94: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x2c4b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_2c4b98:
    // 0x2c4b98: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x2c4b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2c4b9c: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x2c4b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2c4ba0: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x2c4ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2c4ba4: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x2c4ba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2c4ba8: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x2c4ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2c4bac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BACu;
        // 0x2c4bb0: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4BB4u;
    // 0x2c4bb4: 0x0  nop
    ctx->pc = 0x2c4bb4u;
    // NOP
    ctx->pc = 0x2c4bb8u;
}
