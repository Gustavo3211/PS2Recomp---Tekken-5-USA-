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

// Function: sub_004FCCA8
// Address: 0x4fcca8 - 0x4fd280
void sub_004FCCA8_0x4fcca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FCCA8_0x4fcca8");
#endif

    switch (ctx->pc) {
        case 0x4fcf80u: goto label_4fcf80;
        case 0x4fcf9cu: goto label_4fcf9c;
        case 0x4fcfb8u: goto label_4fcfb8;
        case 0x4fcfd4u: goto label_4fcfd4;
        default: break;
    }

    ctx->pc = 0x4fcca8u;

label_4fcca8:
    // 0x4fcca8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4fcca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4fccac: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x4fccacu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fccb0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x4fccb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x4fccb4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x4fccb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fccb8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4fccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4fccbc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4fccbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fccc0: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x4fccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x4fccc4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4fccc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fccc8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4fccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4fcccc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4fccccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fccd0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4fccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4fccd4: 0x25ed0004  addiu       $t5, $t7, 0x4
    ctx->pc = 0x4fccd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x4fccd8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x4fccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x4fccdc: 0x26ce0004  addiu       $t6, $s6, 0x4
    ctx->pc = 0x4fccdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x4fcce0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4fcce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4fcce4: 0x26ab0004  addiu       $t3, $s5, 0x4
    ctx->pc = 0x4fcce4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x4fcce8: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x4fcce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x4fccec: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4fccecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4fccf0: 0x8dea0000  lw          $t2, 0x0($t7)
    ctx->pc = 0x4fccf0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4fccf4: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4fccf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4fccf8: 0x8eac0000  lw          $t4, 0x0($s5)
    ctx->pc = 0x4fccf8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4fccfc: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x4fccfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4fcd00: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4fcd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4fcd04: 0x18a2023  subu        $a0, $t4, $t2
    ctx->pc = 0x4fcd04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x4fcd08: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x4fcd08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fcd0c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4fcd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4fcd10: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4fcd10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4fcd14: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x4fcd14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4fcd18: 0x10a1023  subu        $v0, $t0, $t2
    ctx->pc = 0x4fcd18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x4fcd1c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4fcd1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fcd20: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x4fcd20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4fcd24: 0x1c80014a  bgtz        $a0, . + 4 + (0x14A << 2)
    ctx->pc = 0x4FCD24u;
    {
        const bool branch_taken_0x4fcd24 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x4FCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCD24u;
        // 0x4fcd28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcd24) {
            ctx->pc = 0x4FD250u;
            goto label_4fd250;
        }
    }
    ctx->pc = 0x4FCD2Cu;
    // 0x4fcd2c: 0x2d421000  sltiu       $v0, $t2, 0x1000
    ctx->pc = 0x4fcd2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
    // 0x4fcd30: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FCD30u;
    {
        const bool branch_taken_0x4fcd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fcd30) {
            ctx->pc = 0x4FCD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FCD30u;
            // 0x4fcd34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCD4Cu;
            goto label_4fcd4c;
        }
    }
    ctx->pc = 0x4FCD38u;
    // 0x4fcd38: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FCD38u;
    {
        const bool branch_taken_0x4fcd38 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4FCD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCD38u;
        // 0x4fcd3c: 0x28c21000  slti        $v0, $a2, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcd38) {
            ctx->pc = 0x4FCD48u;
            goto label_4fcd48;
        }
    }
    ctx->pc = 0x4FCD40u;
    // 0x4fcd40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FCD40u;
    {
        const bool branch_taken_0x4fcd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FCD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCD40u;
        // 0x4fcd44: 0x2d821000  sltiu       $v0, $t4, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcd40) {
            ctx->pc = 0x4FCD50u;
            goto label_4fcd50;
        }
    }
    ctx->pc = 0x4FCD48u;
label_4fcd48:
    // 0x4fcd48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4fcd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fcd4c:
    // 0x4fcd4c: 0x2d821000  sltiu       $v0, $t4, 0x1000
    ctx->pc = 0x4fcd4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
label_4fcd50:
    // 0x4fcd50: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FCD50u;
    {
        const bool branch_taken_0x4fcd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fcd50) {
            ctx->pc = 0x4FCD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FCD50u;
            // 0x4fcd54: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCD70u;
            goto label_4fcd70;
        }
    }
    ctx->pc = 0x4FCD58u;
    // 0x4fcd58: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4fcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4fcd5c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FCD5Cu;
    {
        const bool branch_taken_0x4fcd5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4FCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCD5Cu;
        // 0x4fcd60: 0x28421000  slti        $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4096) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcd5c) {
            ctx->pc = 0x4FCD6Cu;
            goto label_4fcd6c;
        }
    }
    ctx->pc = 0x4FCD64u;
    // 0x4fcd64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FCD64u;
    {
        const bool branch_taken_0x4fcd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FCD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCD64u;
        // 0x4fcd68: 0x2d021000  sltiu       $v0, $t0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcd64) {
            ctx->pc = 0x4FCD74u;
            goto label_4fcd74;
        }
    }
    ctx->pc = 0x4FCD6Cu;
label_4fcd6c:
    // 0x4fcd6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4fcd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4fcd70:
    // 0x4fcd70: 0x2d021000  sltiu       $v0, $t0, 0x1000
    ctx->pc = 0x4fcd70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
label_4fcd74:
    // 0x4fcd74: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FCD74u;
    {
        const bool branch_taken_0x4fcd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fcd74) {
            ctx->pc = 0x4FCD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FCD74u;
            // 0x4fcd78: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCD94u;
            goto label_4fcd94;
        }
    }
    ctx->pc = 0x4FCD7Cu;
    // 0x4fcd7c: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4fcd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4fcd80: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FCD80u;
    {
        const bool branch_taken_0x4fcd80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4FCD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCD80u;
        // 0x4fcd84: 0x28421000  slti        $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4096) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcd80) {
            ctx->pc = 0x4FCD90u;
            goto label_4fcd90;
        }
    }
    ctx->pc = 0x4FCD88u;
    // 0x4fcd88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FCD88u;
    {
        const bool branch_taken_0x4fcd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FCD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCD88u;
        // 0x4fcd8c: 0x3c02001e  lui         $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcd88) {
            ctx->pc = 0x4FCD98u;
            goto label_4fcd98;
        }
    }
    ctx->pc = 0x4FCD90u;
label_4fcd90:
    // 0x4fcd90: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4fcd90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4fcd94:
    // 0x4fcd94: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x4fcd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_4fcd98:
    // 0x4fcd98: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x4fcd98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x4fcd9c: 0x34634240  ori         $v1, $v1, 0x4240
    ctx->pc = 0x4fcd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16960);
    // 0x4fcda0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4fcda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4fcda4: 0x34429480  ori         $v0, $v0, 0x9480
    ctx->pc = 0x4fcda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38016);
    // 0x4fcda8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4fcda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4fcdac: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4FCDACu;
    {
        const bool branch_taken_0x4fcdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fcdac) {
            ctx->pc = 0x4FCDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FCDACu;
            // 0x4fcdb0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCDE4u;
            goto label_4fcde4;
        }
    }
    ctx->pc = 0x4FCDB4u;
    // 0x4fcdb4: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4fcdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4fcdb8: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x4fcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x4fcdbc: 0x3442bdc0  ori         $v0, $v0, 0xBDC0
    ctx->pc = 0x4fcdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48576);
    // 0x4fcdc0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x4fcdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4fcdc4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FCDC4u;
    {
        const bool branch_taken_0x4fcdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fcdc4) {
            ctx->pc = 0x4FCDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FCDC4u;
            // 0x4fcdc8: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCDE4u;
            goto label_4fcde4;
        }
    }
    ctx->pc = 0x4FCDCCu;
    // 0x4fcdcc: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4fcdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4fcdd0: 0x34425240  ori         $v0, $v0, 0x5240
    ctx->pc = 0x4fcdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21056);
    // 0x4fcdd4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4fcdd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4fcdd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FCDD8u;
    {
        const bool branch_taken_0x4fcdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCDD8u;
        // 0x4fcddc: 0x3c02001e  lui         $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcdd8) {
            ctx->pc = 0x4FCDE8u;
            goto label_4fcde8;
        }
    }
    ctx->pc = 0x4FCDE0u;
    // 0x4fcde0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4fcde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fcde4:
    // 0x4fcde4: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x4fcde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_4fcde8:
    // 0x4fcde8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x4fcde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x4fcdec: 0x34634240  ori         $v1, $v1, 0x4240
    ctx->pc = 0x4fcdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16960);
    // 0x4fcdf0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x4fcdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x4fcdf4: 0x34429480  ori         $v0, $v0, 0x9480
    ctx->pc = 0x4fcdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38016);
    // 0x4fcdf8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4fcdf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4fcdfc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4FCDFCu;
    {
        const bool branch_taken_0x4fcdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fcdfc) {
            ctx->pc = 0x4FCE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FCDFCu;
            // 0x4fce00: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCE34u;
            goto label_4fce34;
        }
    }
    ctx->pc = 0x4FCE04u;
    // 0x4fce04: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4fce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4fce08: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x4fce08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x4fce0c: 0x3442bdc0  ori         $v0, $v0, 0xBDC0
    ctx->pc = 0x4fce0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48576);
    // 0x4fce10: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x4fce10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4fce14: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FCE14u;
    {
        const bool branch_taken_0x4fce14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fce14) {
            ctx->pc = 0x4FCE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FCE14u;
            // 0x4fce18: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCE34u;
            goto label_4fce34;
        }
    }
    ctx->pc = 0x4FCE1Cu;
    // 0x4fce1c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4fce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4fce20: 0x34425240  ori         $v0, $v0, 0x5240
    ctx->pc = 0x4fce20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21056);
    // 0x4fce24: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4fce24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4fce28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FCE28u;
    {
        const bool branch_taken_0x4fce28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FCE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCE28u;
        // 0x4fce2c: 0x3c02001e  lui         $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fce28) {
            ctx->pc = 0x4FCE38u;
            goto label_4fce38;
        }
    }
    ctx->pc = 0x4FCE30u;
    // 0x4fce30: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4fce30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fce34:
    // 0x4fce34: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x4fce34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_4fce38:
    // 0x4fce38: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x4fce38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x4fce3c: 0x34634240  ori         $v1, $v1, 0x4240
    ctx->pc = 0x4fce3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16960);
    // 0x4fce40: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4fce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4fce44: 0x34429480  ori         $v0, $v0, 0x9480
    ctx->pc = 0x4fce44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38016);
    // 0x4fce48: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4fce48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4fce4c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4FCE4Cu;
    {
        const bool branch_taken_0x4fce4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fce4c) {
            ctx->pc = 0x4FCE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FCE4Cu;
            // 0x4fce50: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCE84u;
            goto label_4fce84;
        }
    }
    ctx->pc = 0x4FCE54u;
    // 0x4fce54: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4fce54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4fce58: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x4fce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x4fce5c: 0x3442bdc0  ori         $v0, $v0, 0xBDC0
    ctx->pc = 0x4fce5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48576);
    // 0x4fce60: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x4fce60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4fce64: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FCE64u;
    {
        const bool branch_taken_0x4fce64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fce64) {
            ctx->pc = 0x4FCE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FCE64u;
            // 0x4fce68: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCE84u;
            goto label_4fce84;
        }
    }
    ctx->pc = 0x4FCE6Cu;
    // 0x4fce6c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4fce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4fce70: 0x34425240  ori         $v0, $v0, 0x5240
    ctx->pc = 0x4fce70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21056);
    // 0x4fce74: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4fce74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4fce78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FCE78u;
    {
        const bool branch_taken_0x4fce78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FCE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCE78u;
        // 0x4fce7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fce78) {
            ctx->pc = 0x4FCE88u;
            goto label_4fce88;
        }
    }
    ctx->pc = 0x4FCE80u;
    // 0x4fce80: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4fce80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fce84:
    // 0x4fce84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4fce88:
    // 0x4fce88: 0x10e200f1  beq         $a3, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x4FCE88u;
    {
        const bool branch_taken_0x4fce88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4FCE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCE88u;
        // 0x4fce8c: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fce88) {
            ctx->pc = 0x4FD250u;
            goto label_4fd250;
        }
    }
    ctx->pc = 0x4FCE90u;
    // 0x4fce90: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4fce90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4fce94: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x4FCE94u;
    {
        const bool branch_taken_0x4fce94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fce94) {
            ctx->pc = 0x4FCE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FCE94u;
            // 0x4fce98: 0x3c070057  lui         $a3, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FCFE0u;
            goto label_4fcfe0;
        }
    }
    ctx->pc = 0x4FCE9Cu;
    // 0x4fce9c: 0x192000ed  blez        $t1, . + 4 + (0xED << 2)
    ctx->pc = 0x4FCE9Cu;
    {
        const bool branch_taken_0x4fce9c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4FCEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCE9Cu;
        // 0x4fcea0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fce9c) {
            ctx->pc = 0x4FD254u;
            goto label_4fd254;
        }
    }
    ctx->pc = 0x4FCEA4u;
    // 0x4fcea4: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4fcea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4fcea8: 0x1885821  addu        $t3, $t4, $t0
    ctx->pc = 0x4fcea8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x4fceac: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4fceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4fceb0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4fceb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4fceb4: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4fceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4fceb8: 0x10a6821  addu        $t5, $t0, $t2
    ctx->pc = 0x4fceb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x4fcebc: 0x69ee0007  ldl         $t6, 0x7($t7)
    ctx->pc = 0x4fcebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4fcec0: 0x6dee0000  ldr         $t6, 0x0($t7)
    ctx->pc = 0x4fcec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x4fcec4: 0x69f7000f  ldl         $s7, 0xF($t7)
    ctx->pc = 0x4fcec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x4fcec8: 0x6df70008  ldr         $s7, 0x8($t7)
    ctx->pc = 0x4fcec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x4fcecc: 0xb3ae0007  sdl         $t6, 0x7($sp)
    ctx->pc = 0x4fceccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fced0: 0xb7ae0000  sdr         $t6, 0x0($sp)
    ctx->pc = 0x4fced0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fced4: 0xb3b7000f  sdl         $s7, 0xF($sp)
    ctx->pc = 0x4fced4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fced8: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x4fced8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x4fcedc: 0x436021  addu        $t4, $v0, $v1
    ctx->pc = 0x4fcedcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fcee0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4fcee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4fcee4: 0xb7b70008  sdr         $s7, 0x8($sp)
    ctx->pc = 0x4fcee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fcee8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fcee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4fceec: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x4fceecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcef0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x4fcef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4fcef4: 0x6aae0007  ldl         $t6, 0x7($s5)
    ctx->pc = 0x4fcef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4fcef8: 0x6eae0000  ldr         $t6, 0x0($s5)
    ctx->pc = 0x4fcef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x4fcefc: 0x6aaf000f  ldl         $t7, 0xF($s5)
    ctx->pc = 0x4fcefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x4fcf00: 0x6eaf0008  ldr         $t7, 0x8($s5)
    ctx->pc = 0x4fcf00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4fcf04: 0xb20e0007  sdl         $t6, 0x7($s0)
    ctx->pc = 0x4fcf04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fcf08: 0xb60e0000  sdr         $t6, 0x0($s0)
    ctx->pc = 0x4fcf08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fcf0c: 0xb20f000f  sdl         $t7, 0xF($s0)
    ctx->pc = 0x4fcf0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fcf10: 0x2532ffff  addiu       $s2, $t1, -0x1
    ctx->pc = 0x4fcf10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4fcf14: 0xa5043  sra         $t2, $t2, 1
    ctx->pc = 0x4fcf14u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 1));
    // 0x4fcf18: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x4fcf18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4fcf1c: 0xb60f0008  sdr         $t7, 0x8($s0)
    ctx->pc = 0x4fcf1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fcf20: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x4fcf20u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x4fcf24: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4fcf24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4fcf28: 0xd6843  sra         $t5, $t5, 1
    ctx->pc = 0x4fcf28u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 1));
    // 0x4fcf2c: 0x6ad90007  ldl         $t9, 0x7($s6)
    ctx->pc = 0x4fcf2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
    // 0x4fcf30: 0x6ed90000  ldr         $t9, 0x0($s6)
    ctx->pc = 0x4fcf30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x4fcf34: 0x6ace000f  ldl         $t6, 0xF($s6)
    ctx->pc = 0x4fcf34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4fcf38: 0x6ece0008  ldr         $t6, 0x8($s6)
    ctx->pc = 0x4fcf38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x4fcf3c: 0xb2390007  sdl         $t9, 0x7($s1)
    ctx->pc = 0x4fcf3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fcf40: 0xb6390000  sdr         $t9, 0x0($s1)
    ctx->pc = 0x4fcf40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fcf44: 0xb22e000f  sdl         $t6, 0xF($s1)
    ctx->pc = 0x4fcf44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fcf48: 0xc6043  sra         $t4, $t4, 1
    ctx->pc = 0x4fcf48u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 1));
    // 0x4fcf4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4fcf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcf50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4fcf50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcf54: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4fcf54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcf58: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4fcf58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcf5c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x4fcf5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcf60: 0xb62e0008  sdr         $t6, 0x8($s1)
    ctx->pc = 0x4fcf60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fcf64: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x4fcf64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x4fcf68: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4fcf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4fcf6c: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x4fcf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x4fcf70: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4fcf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x4fcf74: 0xafad0020  sw          $t5, 0x20($sp)
    ctx->pc = 0x4fcf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 13));
    // 0x4fcf78: 0xc13f32a  jal         func_4FCCA8
    ctx->pc = 0x4FCF78u;
    SET_GPR_U32(ctx, 31, 0x4FCF80u);
    ctx->pc = 0x4FCF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FCF78u;
    // 0x4fcf7c: 0xafac0024  sw          $t4, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCCA8u;
    goto label_4fcca8;
    ctx->pc = 0x4FCF80u;
label_4fcf80:
    // 0x4fcf80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4fcf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcf84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4fcf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcf88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4fcf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcf8c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4fcf8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcf90: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4fcf90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcf94: 0xc13f32a  jal         func_4FCCA8
    ctx->pc = 0x4FCF94u;
    SET_GPR_U32(ctx, 31, 0x4FCF9Cu);
    ctx->pc = 0x4FCF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FCF94u;
    // 0x4fcf98: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCCA8u;
    goto label_4fcca8;
    ctx->pc = 0x4FCF9Cu;
label_4fcf9c:
    // 0x4fcf9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fcf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcfa0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4fcfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcfa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4fcfa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcfa8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4fcfa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcfac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4fcfacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcfb0: 0xc13f32a  jal         func_4FCCA8
    ctx->pc = 0x4FCFB0u;
    SET_GPR_U32(ctx, 31, 0x4FCFB8u);
    ctx->pc = 0x4FCFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FCFB0u;
    // 0x4fcfb4: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCCA8u;
    goto label_4fcca8;
    ctx->pc = 0x4FCFB8u;
label_4fcfb8:
    // 0x4fcfb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fcfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcfbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4fcfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcfc0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4fcfc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcfc4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4fcfc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcfc8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4fcfc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fcfcc: 0xc13f32a  jal         func_4FCCA8
    ctx->pc = 0x4FCFCCu;
    SET_GPR_U32(ctx, 31, 0x4FCFD4u);
    ctx->pc = 0x4FCFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FCFCCu;
    // 0x4fcfd0: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCCA8u;
    goto label_4fcca8;
    ctx->pc = 0x4FCFD4u;
label_4fcfd4:
    // 0x4fcfd4: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x4FCFD4u;
    {
        const bool branch_taken_0x4fcfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCFD4u;
        // 0x4fcfd8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fcfd4) {
            ctx->pc = 0x4FD254u;
            goto label_4fd254;
        }
    }
    ctx->pc = 0x4FCFDCu;
    // 0x4fcfdc: 0x0  nop
    ctx->pc = 0x4fcfdcu;
    // NOP
label_4fcfe0:
    // 0x4fcfe0: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x4fcfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x4fcfe4: 0x24e4ced8  addiu       $a0, $a3, -0x3128
    ctx->pc = 0x4fcfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954712));
    // 0x4fcfe8: 0x2405035b  addiu       $a1, $zero, 0x35B
    ctx->pc = 0x4fcfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 859));
    // 0x4fcfec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4fcfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fcff0: 0xa453003a  sh          $s3, 0x3A($v0)
    ctx->pc = 0x4fcff0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 19));
    // 0x4fcff4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4fcff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fcff8: 0xac740030  sw          $s4, 0x30($v1)
    ctx->pc = 0x4fcff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 20));
    // 0x4fcffc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4fcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fd000: 0x69f80007  ldl         $t8, 0x7($t7)
    ctx->pc = 0x4fd000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x4fd004: 0x6df80000  ldr         $t8, 0x0($t7)
    ctx->pc = 0x4fd004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem >> shift)); }
    // 0x4fd008: 0x69f9000f  ldl         $t9, 0xF($t7)
    ctx->pc = 0x4fd008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
    // 0x4fd00c: 0x6df90008  ldr         $t9, 0x8($t7)
    ctx->pc = 0x4fd00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x4fd010: 0xb0580007  sdl         $t8, 0x7($v0)
    ctx->pc = 0x4fd010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fd014: 0xb4580000  sdr         $t8, 0x0($v0)
    ctx->pc = 0x4fd014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fd018: 0xb059000f  sdl         $t9, 0xF($v0)
    ctx->pc = 0x4fd018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fd01c: 0xb4590008  sdr         $t9, 0x8($v0)
    ctx->pc = 0x4fd01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fd020: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4fd020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fd024: 0x6aa90007  ldl         $t1, 0x7($s5)
    ctx->pc = 0x4fd024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x4fd028: 0x6ea90000  ldr         $t1, 0x0($s5)
    ctx->pc = 0x4fd028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4fd02c: 0x6aaa000f  ldl         $t2, 0xF($s5)
    ctx->pc = 0x4fd02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x4fd030: 0x6eaa0008  ldr         $t2, 0x8($s5)
    ctx->pc = 0x4fd030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x4fd034: 0xb0690017  sdl         $t1, 0x17($v1)
    ctx->pc = 0x4fd034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fd038: 0xb4690010  sdr         $t1, 0x10($v1)
    ctx->pc = 0x4fd038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fd03c: 0xb06a001f  sdl         $t2, 0x1F($v1)
    ctx->pc = 0x4fd03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fd040: 0xb46a0018  sdr         $t2, 0x18($v1)
    ctx->pc = 0x4fd040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fd044: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4fd044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fd048: 0x6ad80007  ldl         $t8, 0x7($s6)
    ctx->pc = 0x4fd048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x4fd04c: 0x6ed80000  ldr         $t8, 0x0($s6)
    ctx->pc = 0x4fd04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem >> shift)); }
    // 0x4fd050: 0x6ad9000f  ldl         $t9, 0xF($s6)
    ctx->pc = 0x4fd050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
    // 0x4fd054: 0x6ed90008  ldr         $t9, 0x8($s6)
    ctx->pc = 0x4fd054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x4fd058: 0xb0580027  sdl         $t8, 0x27($v0)
    ctx->pc = 0x4fd058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fd05c: 0xb4580020  sdr         $t8, 0x20($v0)
    ctx->pc = 0x4fd05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fd060: 0xb059002f  sdl         $t9, 0x2F($v0)
    ctx->pc = 0x4fd060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fd064: 0xb4590028  sdr         $t9, 0x28($v0)
    ctx->pc = 0x4fd064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 25); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fd068: 0x8cc3a348  lw          $v1, -0x5CB8($a2)
    ctx->pc = 0x4fd068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EA348u));
    // 0x4fd06c: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FD06Cu;
    {
        const bool branch_taken_0x4fd06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4FD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD06Cu;
        // 0x4fd070: 0x240211ba  addiu       $v0, $zero, 0x11BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd06c) {
            ctx->pc = 0x4FD07Cu;
            goto label_4fd07c;
        }
    }
    ctx->pc = 0x4FD074u;
    // 0x4fd074: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4FD074u;
    {
        const bool branch_taken_0x4fd074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FD078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD074u;
        // 0x4fd078: 0x24020468  addiu       $v0, $zero, 0x468 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd074) {
            ctx->pc = 0x4FD0F8u;
            goto label_4fd0f8;
        }
    }
    ctx->pc = 0x4FD07Cu;
label_4fd07c:
    // 0x4fd07c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x4fd07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x4fd080: 0x8c63a350  lw          $v1, -0x5CB0($v1)
    ctx->pc = 0x4fd080u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EA350u));
    // 0x4fd084: 0x2462ffc1  addiu       $v0, $v1, -0x3F
    ctx->pc = 0x4fd084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967233));
    // 0x4fd088: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x4fd088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x4fd08c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FD08Cu;
    {
        const bool branch_taken_0x4fd08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FD090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD08Cu;
        // 0x4fd090: 0x24e5ced8  addiu       $a1, $a3, -0x3128 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd08c) {
            ctx->pc = 0x4FD0B4u;
            goto label_4fd0b4;
        }
    }
    ctx->pc = 0x4FD094u;
    // 0x4fd094: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x4fd094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x4fd098: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x4fd098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x4fd09c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FD09Cu;
    {
        const bool branch_taken_0x4fd09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fd09c) {
            ctx->pc = 0x4FD0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FD09Cu;
            // 0x4fd0a0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD0B8u;
            goto label_4fd0b8;
        }
    }
    ctx->pc = 0x4FD0A4u;
    // 0x4fd0a4: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x4fd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x4fd0a8: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4FD0A8u;
    {
        const bool branch_taken_0x4fd0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD0A8u;
        // 0x4fd0ac: 0x8cc3a348  lw          $v1, -0x5CB8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd0a8) {
            ctx->pc = 0x4FD0F4u;
            goto label_4fd0f4;
        }
    }
    ctx->pc = 0x4FD0B0u;
    // 0x4fd0b0: 0x24e5ced8  addiu       $a1, $a3, -0x3128
    ctx->pc = 0x4fd0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954712));
label_4fd0b4:
    // 0x4fd0b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4fd0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4fd0b8:
    // 0x4fd0b8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x4fd0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4fd0bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4fd0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd0c0: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x4fd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x4fd0c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4fd0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4fd0c8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4fd0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fd0cc: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4fd0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4fd0d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4fd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fd0d4: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x4fd0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x4fd0d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4fd0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4fd0dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4fd0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fd0e0: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x4fd0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x4fd0e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4fd0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd0e8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x4fd0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x4fd0ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4fd0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4fd0f0: 0x8cc3a348  lw          $v1, -0x5CB8($a2)
    ctx->pc = 0x4fd0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943560)));
label_4fd0f4:
    // 0x4fd0f4: 0x24020468  addiu       $v0, $zero, 0x468
    ctx->pc = 0x4fd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1128));
label_4fd0f8:
    // 0x4fd0f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4FD0F8u;
    {
        const bool branch_taken_0x4fd0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4FD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD0F8u;
        // 0x4fd0fc: 0x24020472  addiu       $v0, $zero, 0x472 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd0f8) {
            ctx->pc = 0x4FD128u;
            goto label_4fd128;
        }
    }
    ctx->pc = 0x4FD100u;
    // 0x4fd100: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FD100u;
    {
        const bool branch_taken_0x4fd100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4FD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD100u;
        // 0x4fd104: 0x24020b5d  addiu       $v0, $zero, 0xB5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2909));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd100) {
            ctx->pc = 0x4FD128u;
            goto label_4fd128;
        }
    }
    ctx->pc = 0x4FD108u;
    // 0x4fd108: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FD108u;
    {
        const bool branch_taken_0x4fd108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4FD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD108u;
        // 0x4fd10c: 0x24020b67  addiu       $v0, $zero, 0xB67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2919));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd108) {
            ctx->pc = 0x4FD128u;
            goto label_4fd128;
        }
    }
    ctx->pc = 0x4FD110u;
    // 0x4fd110: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FD110u;
    {
        const bool branch_taken_0x4fd110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4FD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD110u;
        // 0x4fd114: 0x240211de  addiu       $v0, $zero, 0x11DE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4574));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd110) {
            ctx->pc = 0x4FD128u;
            goto label_4fd128;
        }
    }
    ctx->pc = 0x4FD118u;
    // 0x4fd118: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FD118u;
    {
        const bool branch_taken_0x4fd118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4FD11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD118u;
        // 0x4fd11c: 0x240211e8  addiu       $v0, $zero, 0x11E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd118) {
            ctx->pc = 0x4FD128u;
            goto label_4fd128;
        }
    }
    ctx->pc = 0x4FD120u;
    // 0x4fd120: 0x54620033  bnel        $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x4FD120u;
    {
        const bool branch_taken_0x4fd120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fd120) {
            ctx->pc = 0x4FD124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FD120u;
            // 0x4fd124: 0x8de20008  lw          $v0, 0x8($t7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD1F0u;
            goto label_4fd1f0;
        }
    }
    ctx->pc = 0x4FD128u;
label_4fd128:
    // 0x4fd128: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x4fd128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x4fd12c: 0x8cc3a350  lw          $v1, -0x5CB0($a2)
    ctx->pc = 0x4fd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EA350u));
    // 0x4fd130: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x4fd130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x4fd134: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x4fd134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4fd138: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FD138u;
    {
        const bool branch_taken_0x4fd138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD138u;
        // 0x4fd13c: 0x24e5ced8  addiu       $a1, $a3, -0x3128 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd138) {
            ctx->pc = 0x4FD160u;
            goto label_4fd160;
        }
    }
    ctx->pc = 0x4FD140u;
    // 0x4fd140: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4fd140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4fd144: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FD144u;
    {
        const bool branch_taken_0x4fd144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4FD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD144u;
        // 0x4fd148: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd144) {
            ctx->pc = 0x4FD160u;
            goto label_4fd160;
        }
    }
    ctx->pc = 0x4FD14Cu;
    // 0x4fd14c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4FD14Cu;
    {
        const bool branch_taken_0x4fd14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4FD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD14Cu;
        // 0x4fd150: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd14c) {
            ctx->pc = 0x4FD160u;
            goto label_4fd160;
        }
    }
    ctx->pc = 0x4FD154u;
    // 0x4fd154: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4FD154u;
    {
        const bool branch_taken_0x4fd154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FD158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD154u;
        // 0x4fd158: 0x8cc2a350  lw          $v0, -0x5CB0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd154) {
            ctx->pc = 0x4FD1A0u;
            goto label_4fd1a0;
        }
    }
    ctx->pc = 0x4FD15Cu;
    // 0x4fd15c: 0x24e5ced8  addiu       $a1, $a3, -0x3128
    ctx->pc = 0x4fd15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954712));
label_4fd160:
    // 0x4fd160: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4fd160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fd164: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x4fd164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4fd168: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4fd168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd16c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x4fd16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x4fd170: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4fd170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4fd174: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4fd174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fd178: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4fd178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4fd17c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4fd17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fd180: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x4fd180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x4fd184: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4fd184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4fd188: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4fd188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fd18c: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x4fd18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x4fd190: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4fd190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd194: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x4fd194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x4fd198: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4fd198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4fd19c: 0x8cc2a350  lw          $v0, -0x5CB0($a2)
    ctx->pc = 0x4fd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943568)));
label_4fd1a0:
    // 0x4fd1a0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x4fd1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4fd1a4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4FD1A4u;
    {
        const bool branch_taken_0x4fd1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd1a4) {
            ctx->pc = 0x4FD1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FD1A4u;
            // 0x4fd1a8: 0x8de20008  lw          $v0, 0x8($t7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD1F0u;
            goto label_4fd1f0;
        }
    }
    ctx->pc = 0x4FD1ACu;
    // 0x4fd1ac: 0x24e5ced8  addiu       $a1, $a3, -0x3128
    ctx->pc = 0x4fd1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954712));
    // 0x4fd1b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4fd1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fd1b4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x4fd1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4fd1b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4fd1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd1bc: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x4fd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x4fd1c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4fd1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4fd1c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4fd1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fd1c8: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4fd1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4fd1cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4fd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fd1d0: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x4fd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x4fd1d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4fd1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4fd1d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4fd1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fd1dc: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x4fd1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x4fd1e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4fd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd1e4: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x4fd1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x4fd1e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4fd1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4fd1ec: 0x8de20008  lw          $v0, 0x8($t7)
    ctx->pc = 0x4fd1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_4fd1f0:
    // 0x4fd1f0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4fd1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4fd1f4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x4fd1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4fd1f8: 0x24e7ced8  addiu       $a3, $a3, -0x3128
    ctx->pc = 0x4fd1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954712));
    // 0x4fd1fc: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x4fd1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x4fd200: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4fd200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4fd204: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x4fd204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x4fd208: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4fd208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4fd20c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fd210: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4fd210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x4fd214: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x4fd214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x4fd218: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4fd218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4fd21c: 0x2464cecc  addiu       $a0, $v1, -0x3134
    ctx->pc = 0x4fd21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954700));
    // 0x4fd220: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x4fd220u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4fd224: 0x1012  mflo        $v0
    ctx->pc = 0x4fd224u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4fd228: 0xaca20034  sw          $v0, 0x34($a1)
    ctx->pc = 0x4fd228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
    // 0x4fd22c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4fd22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fd230: 0x2862176f  slti        $v0, $v1, 0x176F
    ctx->pc = 0x4fd230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5999) ? 1 : 0);
    // 0x4fd234: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FD234u;
    {
        const bool branch_taken_0x4fd234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD234u;
        // 0x4fd238: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd234) {
            ctx->pc = 0x4FD254u;
            goto label_4fd254;
        }
    }
    ctx->pc = 0x4FD23Cu;
    // 0x4fd23c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4fd23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4fd240: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4fd240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4fd244: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4fd244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4fd248: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4fd248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4fd24c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4fd24cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4fd250:
    // 0x4fd250: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4fd250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4fd254:
    // 0x4fd254: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x4fd254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4fd258: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4fd258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4fd25c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x4fd25cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4fd260: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4fd260u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4fd264: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x4fd264u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4fd268: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4fd268u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fd26c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x4fd26cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4fd270: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4fd270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4fd274: 0x3e00008  jr          $ra
    ctx->pc = 0x4FD274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD274u;
        // 0x4fd278: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FD274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FD27Cu;
    // 0x4fd27c: 0x0  nop
    ctx->pc = 0x4fd27cu;
    // NOP
    ctx->pc = 0x4fd280u;
}
