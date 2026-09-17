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

// Function: sub_00506C00
// Address: 0x506c00 - 0x506e68
void sub_00506C00_0x506c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506C00_0x506c00");
#endif

    switch (ctx->pc) {
        case 0x506c50u: goto label_506c50;
        case 0x506c78u: goto label_506c78;
        default: break;
    }

    ctx->pc = 0x506c00u;

    // 0x506c00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x506c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x506c04: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x506c04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x506c08: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x506c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x506c0c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x506c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x506c10: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x506c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x506c14: 0x6a403  sra         $s4, $a2, 16
    ctx->pc = 0x506c14u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 16));
    // 0x506c18: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x506c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x506c1c: 0x7ac03  sra         $s5, $a3, 16
    ctx->pc = 0x506c1cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 7), 16));
    // 0x506c20: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x506c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x506c24: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x506c24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x506c28: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x506c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x506c2c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x506c2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506c30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x506c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x506c34: 0x8b403  sra         $s6, $t0, 16
    ctx->pc = 0x506c34u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 8), 16));
    // 0x506c38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x506c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x506c3c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x506c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x506c40: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x506c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x506c44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x506c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x506c48: 0xc144ac0  jal         func_512B00
    ctx->pc = 0x506C48u;
    SET_GPR_U32(ctx, 31, 0x506C50u);
    ctx->pc = 0x506C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506C48u;
    // 0x506c4c: 0x8ef20000  lw          $s2, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512B00u, 0x506C48u, 0x506C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506C50u;
label_506c50:
    // 0x506c50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x506c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506c54: 0x12200079  beqz        $s1, . + 4 + (0x79 << 2)
    ctx->pc = 0x506C54u;
    {
        const bool branch_taken_0x506c54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x506C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506C54u;
        // 0x506c58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506c54) {
            ctx->pc = 0x506E3Cu;
            goto label_506e3c;
        }
    }
    ctx->pc = 0x506C5Cu;
    // 0x506c5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x506c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506c60: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x506c60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x506c64: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x506c64u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x506c68: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x506c68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506c6c: 0xa6220118  sh          $v0, 0x118($s1)
    ctx->pc = 0x506c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x506c70: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x506C70u;
    SET_GPR_U32(ctx, 31, 0x506C78u);
    ctx->pc = 0x506C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506C70u;
    // 0x506c74: 0x87b00000  lh          $s0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x506C70u, 0x506C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506C78u;
label_506c78:
    // 0x506c78: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x506c78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506c7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x506c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506c80: 0x2138025  or          $s0, $s0, $s3
    ctx->pc = 0x506c80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 19));
    // 0x506c84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x506c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x506c88: 0x108440  sll         $s0, $s0, 17
    ctx->pc = 0x506c88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 17));
    // 0x506c8c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x506c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x506c90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506c94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506c98: 0x108443  sra         $s0, $s0, 17
    ctx->pc = 0x506c98u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 17));
    // 0x506c9c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x506c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x506ca0: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x506ca0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506ca4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x506ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x506ca8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x506ca8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x506cac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x506cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x506cb0: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x506cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
    // 0x506cb4: 0x252976c0  addiu       $t1, $t1, 0x76C0
    ctx->pc = 0x506cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30400));
    // 0x506cb8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x506cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x506cbc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x506CBCu;
    {
        const bool branch_taken_0x506cbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x506CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506CBCu;
        // 0x506cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506cbc) {
            ctx->pc = 0x506CD8u;
            goto label_506cd8;
        }
    }
    ctx->pc = 0x506CC4u;
    // 0x506cc4: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x506CC4u;
    {
        const bool branch_taken_0x506cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x506CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506CC4u;
        // 0x506cc8: 0x262a0014  addiu       $t2, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506cc4) {
            ctx->pc = 0x506D20u;
            goto label_506d20;
        }
    }
    ctx->pc = 0x506CCCu;
    // 0x506ccc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x506CCCu;
    {
        const bool branch_taken_0x506ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506CCCu;
        // 0x506cd0: 0x95230000  lhu         $v1, 0x0($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506ccc) {
            ctx->pc = 0x506DA4u;
            goto label_506da4;
        }
    }
    ctx->pc = 0x506CD4u;
    // 0x506cd4: 0x0  nop
    ctx->pc = 0x506cd4u;
    // NOP
label_506cd8:
    // 0x506cd8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x506cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x506cdc: 0x141400  sll         $v0, $s4, 16
    ctx->pc = 0x506cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x506ce0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x506ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x506ce4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x506ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x506ce8: 0x2b32825  or          $a1, $s5, $s3
    ctx->pc = 0x506ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 19));
    // 0x506cec: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x506cecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x506cf0: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x506cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x506cf4: 0x162400  sll         $a0, $s6, 16
    ctx->pc = 0x506cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x506cf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506cfc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x506cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x506d00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506d04: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x506d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x506d08: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x506d08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x506d0c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x506d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x506d10: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x506d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x506d14: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x506d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x506d18: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x506D18u;
    {
        const bool branch_taken_0x506d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506D18u;
        // 0x506d1c: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506d18) {
            ctx->pc = 0x506DA0u;
            goto label_506da0;
        }
    }
    ctx->pc = 0x506D20u;
label_506d20:
    // 0x506d20: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x506d20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x506d24: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x506d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x506d28: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x506d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x506d2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x506d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x506d30: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x506d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x506d34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506d38: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x506d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x506d3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x506d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x506d40: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x506d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x506d44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x506d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x506d48: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x506d48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x506d4c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x506d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x506d50: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x506d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x506d54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x506d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x506d58: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x506d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x506d5c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x506d5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x506d60: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x506d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x506d64: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x506d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x506d68: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x506d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x506d6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506d70: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x506d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x506d74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x506d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x506d78: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x506d78u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x506d7c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x506d7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x506d80: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x506d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x506d84: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x506d84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x506d88: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x506d88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x506d8c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x506d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x506d90: 0xa622002e  sh          $v0, 0x2E($s1)
    ctx->pc = 0x506d90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x506d94: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x506d94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x506d98: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x506d98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x506d9c: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x506d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
label_506da0:
    // 0x506da0: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x506da0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_506da4:
    // 0x506da4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x506da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x506da8: 0x26260018  addiu       $a2, $s1, 0x18
    ctx->pc = 0x506da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x506dac: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x506dacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x506db0: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x506db0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x506db4: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x506db4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x506db8: 0xa6220028  sh          $v0, 0x28($s1)
    ctx->pc = 0x506db8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x506dbc: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x506dbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x506dc0: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x506dc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x506dc4: 0xa623002a  sh          $v1, 0x2A($s1)
    ctx->pc = 0x506dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x506dc8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x506dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x506dcc: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x506dccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x506dd0: 0xa6220026  sh          $v0, 0x26($s1)
    ctx->pc = 0x506dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x506dd4: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x506dd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x506dd8: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x506dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x506ddc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x506ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x506de0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x506de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x506de4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x506de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x506de8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x506de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x506dec: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x506decu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x506df0: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x506df0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x506df4: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x506df4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x506df8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x506df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x506dfc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x506dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x506e00: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x506e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x506e04: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x506e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x506e08: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x506e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x506e0c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x506e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x506e10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506e14: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x506e14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x506e18: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x506e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x506e1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506e20: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x506e20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x506e24: 0x95220002  lhu         $v0, 0x2($t1)
    ctx->pc = 0x506e24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x506e28: 0xa620011c  sh          $zero, 0x11C($s1)
    ctx->pc = 0x506e28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x506e2c: 0xa622011a  sh          $v0, 0x11A($s1)
    ctx->pc = 0x506e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 282), (uint16_t)GPR_U32(ctx, 2));
    // 0x506e30: 0xa6200022  sh          $zero, 0x22($s1)
    ctx->pc = 0x506e30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x506e34: 0xa6200024  sh          $zero, 0x24($s1)
    ctx->pc = 0x506e34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x506e38: 0xaef20000  sw          $s2, 0x0($s7)
    ctx->pc = 0x506e38u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
label_506e3c:
    // 0x506e3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x506e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x506e40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x506e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x506e44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x506e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x506e48: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x506e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x506e4c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x506e4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x506e50: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x506e50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x506e54: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x506e54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x506e58: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x506e58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x506e5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x506e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x506e60: 0x3e00008  jr          $ra
    ctx->pc = 0x506E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506E60u;
        // 0x506e64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x506E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x506E68u;
}
