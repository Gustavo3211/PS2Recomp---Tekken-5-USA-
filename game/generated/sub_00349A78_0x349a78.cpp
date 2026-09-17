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

// Function: sub_00349A78
// Address: 0x349a78 - 0x349da8
void sub_00349A78_0x349a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349A78_0x349a78");
#endif

    switch (ctx->pc) {
        case 0x349b00u: goto label_349b00;
        case 0x349c28u: goto label_349c28;
        case 0x349ce8u: goto label_349ce8;
        case 0x349d08u: goto label_349d08;
        default: break;
    }

    ctx->pc = 0x349a78u;

    // 0x349a78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x349a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x349a7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x349a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x349a80: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x349a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x349a84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x349a84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349a88: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x349a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x349a8c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x349a8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349a90: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x349a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x349a94: 0x31360004  andi        $s6, $t1, 0x4
    ctx->pc = 0x349a94u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
    // 0x349a98: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x349a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x349a9c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x349a9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349aa0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x349aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x349aa4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x349aa4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349aa8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x349aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x349aac: 0xf59023  subu        $s2, $a3, $s5
    ctx->pc = 0x349aacu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x349ab0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x349ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x349ab4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x349ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x349ab8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x349ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x349abc: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x349abcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x349ac0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x349ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x349ac4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x349ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x349ac8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x349ac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x349acc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x349accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x349ad0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x349ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x349ad4: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x349AD4u;
    {
        const bool branch_taken_0x349ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x349AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349AD4u;
        // 0x349ad8: 0x8e71000c  lw          $s1, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ad4) {
            ctx->pc = 0x349CA0u;
            goto label_349ca0;
        }
    }
    ctx->pc = 0x349ADCu;
    // 0x349adc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x349adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x349ae0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x349ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x349ae4: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x349ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x349ae8: 0x261003c0  addiu       $s0, $s0, 0x3C0
    ctx->pc = 0x349ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x349aec: 0x8c740014  lw          $s4, 0x14($v1)
    ctx->pc = 0x349aecu;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x400414u));
    // 0x349af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x349af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349af4: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x349af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x349af8: 0xc0ce218  jal         func_338860
    ctx->pc = 0x349AF8u;
    SET_GPR_U32(ctx, 31, 0x349B00u);
    ctx->pc = 0x349AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349AF8u;
    // 0x349afc: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x349AF8u, 0x349B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B00u;
label_349b00:
    // 0x349b00: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x349b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x349b04: 0x121902  srl         $v1, $s2, 4
    ctx->pc = 0x349b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x349b08: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x349b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x349b0c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x349b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x349b10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x349b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x349b14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x349b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x349b18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x349b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x349b1c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x349b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x349b20: 0x3463d010  ori         $v1, $v1, 0xD010
    ctx->pc = 0x349b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53264);
    // 0x349b24: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x349b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349b28: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x349b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x349b2c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x349b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x349b30: 0x32a23fff  andi        $v0, $s5, 0x3FFF
    ctx->pc = 0x349b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16383);
    // 0x349b34: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x349b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
    // 0x349b38: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x349b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x349b3c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x349b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349b40: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x349b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x349b44: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x349b44u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 2)); // MMIO: 0x1000d080
    // 0x349b48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x349b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x349b4c: 0x3484e010  ori         $a0, $a0, 0xE010
    ctx->pc = 0x349b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57360);
    // 0x349b50: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x349b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x349b54: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x349b54u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000D080u)); // MMIO: 0x1000d080
    // 0x349b58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x349b58u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x349b5c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x349b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x349b60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x349b60u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x1000d000
    // 0x349b64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x349b64u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x349b68: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x349b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x349b6c: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x349b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
    // 0x349b70: 0x2f51823  subu        $v1, $s7, $s5
    ctx->pc = 0x349b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    // 0x349b74: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x349b74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x349b78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x349b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x349b7c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x349B7Cu;
    {
        const bool branch_taken_0x349b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B7Cu;
        // 0x349b80: 0x74b821  addu        $s7, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349b7c) {
            ctx->pc = 0x349C00u;
            goto label_349c00;
        }
    }
    ctx->pc = 0x349B84u;
    // 0x349b84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x349b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x349b88: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x349B88u;
    {
        const bool branch_taken_0x349b88 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x349B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B88u;
        // 0x349b8c: 0x24441180  addiu       $a0, $v0, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349b88) {
            ctx->pc = 0x349BA8u;
            goto label_349ba8;
        }
    }
    ctx->pc = 0x349B90u;
    // 0x349b90: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x349b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x349b94: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x349b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x349b98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x349b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349b9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x349B9Cu;
    {
        const bool branch_taken_0x349b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B9Cu;
        // 0x349ba0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349b9c) {
            ctx->pc = 0x349BB8u;
            goto label_349bb8;
        }
    }
    ctx->pc = 0x349BA4u;
    // 0x349ba4: 0x0  nop
    ctx->pc = 0x349ba4u;
    // NOP
label_349ba8:
    // 0x349ba8: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x349ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x349bac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x349bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x349bb0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x349bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349bb4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x349bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_349bb8:
    // 0x349bb8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x349bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349bbc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x349bbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x349bc0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x349bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349bc4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x349bc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349bc8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x349bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349bcc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x349bccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x349bd0: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x349bd0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349bd4: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x349bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349bd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x349bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349bdc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x349bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349be0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x349be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349be4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x349be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x349be8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x349be8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349bec: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x349becu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349bf0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x349bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x349bf4: 0x80c81e2  j           func_320788
    ctx->pc = 0x349BF4u;
    ctx->pc = 0x349BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349BF4u;
    // 0x349bf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320788u;
    sub_00320788_0x320788(rdram, ctx, runtime); return;
    ctx->pc = 0x349BFCu;
    // 0x349bfc: 0x0  nop
    ctx->pc = 0x349bfcu;
    // NOP
label_349c00:
    // 0x349c00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x349c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x349c04: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x349c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x349c08: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x349c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x349c0c: 0x24721180  addiu       $s2, $v1, 0x1180
    ctx->pc = 0x349c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4480));
    // 0x349c10: 0x24500068  addiu       $s0, $v0, 0x68
    ctx->pc = 0x349c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x349c14: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x349c14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400DC4u));
    // 0x349c18: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x349C18u;
    {
        const bool branch_taken_0x349c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x349c18) {
            ctx->pc = 0x349C28u;
            goto label_349c28;
        }
    }
    ctx->pc = 0x349C20u;
    // 0x349c20: 0xc0c89d4  jal         func_322750
    ctx->pc = 0x349C20u;
    SET_GPR_U32(ctx, 31, 0x349C28u);
    ctx->pc = 0x349C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C20u;
    // 0x349c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x349C20u, 0x349C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C28u;
label_349c28:
    // 0x349c28: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x349C28u;
    {
        const bool branch_taken_0x349c28 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x349C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C28u;
        // 0x349c2c: 0xc60c0054  lwc1        $f12, 0x54($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c28) {
            ctx->pc = 0x349C48u;
            goto label_349c48;
        }
    }
    ctx->pc = 0x349C30u;
    // 0x349c30: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x349c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x349c34: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x349c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x349c38: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x349c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349c3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x349C3Cu;
    {
        const bool branch_taken_0x349c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C3Cu;
        // 0x349c40: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c3c) {
            ctx->pc = 0x349C58u;
            goto label_349c58;
        }
    }
    ctx->pc = 0x349C44u;
    // 0x349c44: 0x0  nop
    ctx->pc = 0x349c44u;
    // NOP
label_349c48:
    // 0x349c48: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x349c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x349c4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x349c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x349c50: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x349c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349c54: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x349c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_349c58:
    // 0x349c58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x349c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349c5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x349c5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349c60: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x349c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349c64: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x349c64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x349c68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x349c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349c6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x349c6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349c70: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x349c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349c74: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x349c74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x349c78: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x349c78u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349c7c: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x349c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349c80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x349c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349c84: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x349c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349c88: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x349c88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x349c8c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x349c8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349c90: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x349c90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349c94: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x349c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x349c98: 0x80c819c  j           func_320670
    ctx->pc = 0x349C98u;
    ctx->pc = 0x349C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C98u;
    // 0x349c9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320670u;
    sub_00320670_0x320670(rdram, ctx, runtime); return;
    ctx->pc = 0x349CA0u;
label_349ca0:
    // 0x349ca0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x349ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x349ca4: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x349CA4u;
    {
        const bool branch_taken_0x349ca4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x349CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349CA4u;
        // 0x349ca8: 0x24441180  addiu       $a0, $v0, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ca4) {
            ctx->pc = 0x349CC0u;
            goto label_349cc0;
        }
    }
    ctx->pc = 0x349CACu;
    // 0x349cac: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x349cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x349cb0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x349cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x349cb4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x349cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349cb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x349CB8u;
    {
        const bool branch_taken_0x349cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349CB8u;
        // 0x349cbc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349cb8) {
            ctx->pc = 0x349CD0u;
            goto label_349cd0;
        }
    }
    ctx->pc = 0x349CC0u;
label_349cc0:
    // 0x349cc0: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x349cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x349cc4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x349cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x349cc8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x349cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349ccc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x349cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_349cd0:
    // 0x349cd0: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x349cd0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349cd4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x349cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349cd8: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x349cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349cdc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x349cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349ce0: 0xc0c8186  jal         func_320618
    ctx->pc = 0x349CE0u;
    SET_GPR_U32(ctx, 31, 0x349CE8u);
    ctx->pc = 0x349CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349CE0u;
    // 0x349ce4: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320618u, 0x349CE0u, 0x349CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349CE8u;
label_349ce8:
    // 0x349ce8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x349ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x349cec: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x349cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x349cf0: 0x263103c0  addiu       $s1, $s1, 0x3C0
    ctx->pc = 0x349cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
    // 0x349cf4: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x349cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x400414u));
    // 0x349cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349cfc: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x349cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x349d00: 0xc0ce218  jal         func_338860
    ctx->pc = 0x349D00u;
    SET_GPR_U32(ctx, 31, 0x349D08u);
    ctx->pc = 0x349D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349D00u;
    // 0x349d04: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x349D00u, 0x349D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D08u;
label_349d08:
    // 0x349d08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x349d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x349d0c: 0x122902  srl         $a1, $s2, 4
    ctx->pc = 0x349d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x349d10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x349d10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349d14: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x349d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x349d18: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x349d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x349d1c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x349d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x349d20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x349d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x349d24: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x349d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x349d28: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x349d28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x349d2c: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x349d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x349d30: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x349d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349d34: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x349d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x349d38: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x349d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x349d3c: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x349d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
    // 0x349d40: 0x32a23fff  andi        $v0, $s5, 0x3FFF
    ctx->pc = 0x349d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16383);
    // 0x349d44: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x349d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349d48: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x349d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x349d4c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x349d4cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 2)); // MMIO: 0x1000d080
    // 0x349d50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x349d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x349d54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x349d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x349d58: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x349d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x349d5c: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x349d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x349d60: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x349d60u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000D080u)); // MMIO: 0x1000d080
    // 0x349d64: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x349d64u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x349d68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x349d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349d6c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x349d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x349d70: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x349d70u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 4)); // MMIO: 0x1000d000
    // 0x349d74: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x349d74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x349d78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x349d78u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x349d7c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x349d7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349d80: 0xae350004  sw          $s5, 0x4($s1)
    ctx->pc = 0x349d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
    // 0x349d84: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x349d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x349d88: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x349d88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349d8c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x349d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349d90: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x349d90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349d94: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x349d94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x349d98: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x349d98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x349d9c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x349d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x349da0: 0x3e00008  jr          $ra
    ctx->pc = 0x349DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349DA0u;
        // 0x349da4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349DA8u;
}
