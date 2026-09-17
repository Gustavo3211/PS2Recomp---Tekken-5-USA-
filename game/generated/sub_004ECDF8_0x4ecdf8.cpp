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

// Function: sub_004ECDF8
// Address: 0x4ecdf8 - 0x4ed178
void sub_004ECDF8_0x4ecdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECDF8_0x4ecdf8");
#endif

    ctx->pc = 0x4ecdf8u;

    // 0x4ecdf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ecdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ecdfc: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4ecdfcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4ece00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ece00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ece04: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ece04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ece08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ece08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ece0c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4ece0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ece10: 0x25a411e8  addiu       $a0, $t5, 0x11E8
    ctx->pc = 0x4ece10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4584));
    // 0x4ece14: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ece14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ece18: 0x8563013a  lh          $v1, 0x13A($t3)
    ctx->pc = 0x4ece18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 314)));
    // 0x4ece1c: 0x25650120  addiu       $a1, $t3, 0x120
    ctx->pc = 0x4ece1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 288));
    // 0x4ece20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ece20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ece24: 0x25790118  addiu       $t9, $t3, 0x118
    ctx->pc = 0x4ece24u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 11), 280));
    // 0x4ece28: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4ece28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4ece2c: 0x256c0158  addiu       $t4, $t3, 0x158
    ctx->pc = 0x4ece2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 344));
    // 0x4ece30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ece30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ece34: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4ece34u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4ece38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ece38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ece3c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ece3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ece40: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4ece40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ece44: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ece44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ece48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ece48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ece4c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4ece4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ece50: 0xae001204  sw          $zero, 0x1204($s0)
    ctx->pc = 0x4ece50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4612), GPR_U32(ctx, 0));
    // 0x4ece54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ece54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ece58: 0x87220000  lh          $v0, 0x0($t9)
    ctx->pc = 0x4ece58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4ece5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ece5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ece60: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ece60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ece64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ece64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ece68: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ece68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ece6c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ece6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ece70: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4ece70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ece74: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ece74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ece78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ece78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ece7c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ECE7Cu;
    {
        const bool branch_taken_0x4ece7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4ECE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECE7Cu;
        // 0x4ece80: 0x25c611ec  addiu       $a2, $t6, 0x11EC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 4588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ece7c) {
            ctx->pc = 0x4ECE90u;
            goto label_4ece90;
        }
    }
    ctx->pc = 0x4ECE84u;
    // 0x4ece84: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ece84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ece88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4ECE88u;
    {
        const bool branch_taken_0x4ece88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECE88u;
        // 0x4ece8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ece88) {
            ctx->pc = 0x4ECE98u;
            goto label_4ece98;
        }
    }
    ctx->pc = 0x4ECE90u;
label_4ece90:
    // 0x4ece90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ece90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ece94: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4ece94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4ece98:
    // 0x4ece98: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ece98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4ece9c: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4ece9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4ecea0: 0x25ea11f0  addiu       $t2, $t7, 0x11F0
    ctx->pc = 0x4ecea0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 4592));
    // 0x4ecea4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ecea4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ecea8: 0x85620136  lh          $v0, 0x136($t3)
    ctx->pc = 0x4ecea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 310)));
    // 0x4eceac: 0x25a811e8  addiu       $t0, $t5, 0x11E8
    ctx->pc = 0x4eceacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 4584));
    // 0x4eceb0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4eceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11F0u));
    // 0x4eceb4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4eceb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4eceb8: 0x95c911ec  lhu         $t1, 0x11EC($t6)
    ctx->pc = 0x4eceb8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4588)));
    // 0x4ecebc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ecebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ecec0: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4ecec0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ecec4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ecec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ecec8: 0x92c00  sll         $a1, $t1, 16
    ctx->pc = 0x4ecec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4ececc: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4ececcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4eced0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eced0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eced4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4eced4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4eced8: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4eced8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ecedc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4ecedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ecee0: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x4ecee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x4ecee4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ecee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ecee8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ecee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4eceec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eceecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ecef0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ecef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ecef4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ecef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ecef8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4ecef8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4ecefc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ecefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ecf00: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4ecf00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ecf04: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4ecf04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ecf08: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ecf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ecf0c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4ecf0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ecf10: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4ecf10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4ecf14: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4ecf14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ecf18: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4ecf18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4ecf1c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4ecf1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4ecf20: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4ecf20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4ecf24: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4ecf24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4ecf28: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4ecf28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ecf2c: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4ecf2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ecf30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ecf30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ecf34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ecf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ecf38: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4ECF38u;
    {
        const bool branch_taken_0x4ecf38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4ECF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECF38u;
        // 0x4ecf3c: 0x34a900ff  ori         $t1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecf38) {
            ctx->pc = 0x4ECF48u;
            goto label_4ecf48;
        }
    }
    ctx->pc = 0x4ECF40u;
    // 0x4ecf40: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4ecf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4ecf44: 0xa24824  and         $t1, $a1, $v0
    ctx->pc = 0x4ecf44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4ecf48:
    // 0x4ecf48: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x4ecf48u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x4ecf4c: 0x25c911ec  addiu       $t1, $t6, 0x11EC
    ctx->pc = 0x4ecf4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 4588));
    // 0x4ecf50: 0x25e411f0  addiu       $a0, $t7, 0x11F0
    ctx->pc = 0x4ecf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4592));
    // 0x4ecf54: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4ecf54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4ecf58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ecf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ecf5c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4ecf5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ecf60: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4ecf60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ecf64: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4ecf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4ecf68: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4ecf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4ecf6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ecf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4ecf70: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ecf70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ecf74: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4ecf74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ecf78: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4ECF78u;
    {
        const bool branch_taken_0x4ecf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECF78u;
        // 0x4ecf7c: 0x26061204  addiu       $a2, $s0, 0x1204 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecf78) {
            ctx->pc = 0x4ECFBCu;
            goto label_4ecfbc;
        }
    }
    ctx->pc = 0x4ECF80u;
    // 0x4ecf80: 0x25a811e8  addiu       $t0, $t5, 0x11E8
    ctx->pc = 0x4ecf80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 4584));
    // 0x4ecf84: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x4ecf84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ecf88: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ecf88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ecf8c: 0x85850000  lh          $a1, 0x0($t4)
    ctx->pc = 0x4ecf8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ecf90: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ecf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ecf94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4ecf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4ecf98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ecf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ecf9c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4ecf9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4ecfa0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ecfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ecfa4: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4ecfa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4ecfa8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ecfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ecfac: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4ecfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ecfb0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4ecfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4ecfb4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4ecfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4ecfb8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ecfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4ecfbc:
    // 0x4ecfbc: 0x25a411e8  addiu       $a0, $t5, 0x11E8
    ctx->pc = 0x4ecfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4584));
    // 0x4ecfc0: 0x2578011c  addiu       $t8, $t3, 0x11C
    ctx->pc = 0x4ecfc0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 284));
    // 0x4ecfc4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ecfc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ecfc8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ecfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ecfcc: 0x256c015c  addiu       $t4, $t3, 0x15C
    ctx->pc = 0x4ecfccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 348));
    // 0x4ecfd0: 0xa7220000  sh          $v0, 0x0($t9)
    ctx->pc = 0x4ecfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ecfd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ecfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ecfd8: 0x87020000  lh          $v0, 0x0($t8)
    ctx->pc = 0x4ecfd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4ecfdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ecfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ecfe0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ecfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ecfe4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ecfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ecfe8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ecfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ecfec: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ecfecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ecff0: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4ecff0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ecff4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ecff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ecff8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ecff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ecffc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ECFFCu;
    {
        const bool branch_taken_0x4ecffc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4ED000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECFFCu;
        // 0x4ed000: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecffc) {
            ctx->pc = 0x4ED010u;
            goto label_4ed010;
        }
    }
    ctx->pc = 0x4ED004u;
    // 0x4ed004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4ED004u;
    {
        const bool branch_taken_0x4ed004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED004u;
        // 0x4ed008: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed004) {
            ctx->pc = 0x4ED014u;
            goto label_4ed014;
        }
    }
    ctx->pc = 0x4ED00Cu;
    // 0x4ed00c: 0x0  nop
    ctx->pc = 0x4ed00cu;
    // NOP
label_4ed010:
    // 0x4ed010: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4ed010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4ed014:
    // 0x4ed014: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4ed014u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4ed018: 0x25ea11f0  addiu       $t2, $t7, 0x11F0
    ctx->pc = 0x4ed018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 4592));
    // 0x4ed01c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ed01cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ed020: 0x25a811e8  addiu       $t0, $t5, 0x11E8
    ctx->pc = 0x4ed020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 4584));
    // 0x4ed024: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4ed024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ed028: 0x85620138  lh          $v0, 0x138($t3)
    ctx->pc = 0x4ed028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 312)));
    // 0x4ed02c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed030: 0x95c911ec  lhu         $t1, 0x11EC($t6)
    ctx->pc = 0x4ed030u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4588)));
    // 0x4ed034: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ed034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ed038: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4ed038u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ed03c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed040: 0x92c00  sll         $a1, $t1, 16
    ctx->pc = 0x4ed040u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4ed044: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4ed044u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4ed048: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed04c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4ed04cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4ed050: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4ed050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ed054: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4ed054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ed058: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x4ed058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x4ed05c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ed05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ed060: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ed060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ed064: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ed064u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ed068: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ed068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ed06c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed070: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4ed070u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4ed074: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed078: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4ed078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ed07c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4ed07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ed080: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ed080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ed084: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4ed084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed088: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4ed088u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4ed08c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4ed08cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ed090: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4ed090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4ed094: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4ed094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4ed098: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4ed098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4ed09c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4ed09cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4ed0a0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4ed0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ed0a4: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4ed0a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ed0a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ed0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ed0ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ed0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ed0b0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4ED0B0u;
    {
        const bool branch_taken_0x4ed0b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4ED0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED0B0u;
        // 0x4ed0b4: 0x34a900ff  ori         $t1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed0b0) {
            ctx->pc = 0x4ED0C0u;
            goto label_4ed0c0;
        }
    }
    ctx->pc = 0x4ED0B8u;
    // 0x4ed0b8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4ed0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4ed0bc: 0xa24824  and         $t1, $a1, $v0
    ctx->pc = 0x4ed0bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4ed0c0:
    // 0x4ed0c0: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x4ed0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x4ed0c4: 0x25e411f0  addiu       $a0, $t7, 0x11F0
    ctx->pc = 0x4ed0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4592));
    // 0x4ed0c8: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4ed0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4ed0cc: 0x91c311ec  lbu         $v1, 0x11EC($t6)
    ctx->pc = 0x4ed0ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4588)));
    // 0x4ed0d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ed0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ed0d4: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4ed0d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ed0d8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ed0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ed0dc: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x4ed0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x4ed0e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ed0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ed0e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ed0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ed0e8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x4ed0e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ed0ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4ED0ECu;
    {
        const bool branch_taken_0x4ed0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED0ECu;
        // 0x4ed0f0: 0x26061204  addiu       $a2, $s0, 0x1204 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed0ec) {
            ctx->pc = 0x4ED130u;
            goto label_4ed130;
        }
    }
    ctx->pc = 0x4ED0F4u;
    // 0x4ed0f4: 0x25a811e8  addiu       $t0, $t5, 0x11E8
    ctx->pc = 0x4ed0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 4584));
    // 0x4ed0f8: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x4ed0f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ed0fc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ed0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ed100: 0x85850000  lh          $a1, 0x0($t4)
    ctx->pc = 0x4ed100u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ed104: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ed104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ed108: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4ed108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4ed10c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ed10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ed110: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4ed110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4ed114: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed118: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4ed118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4ed11c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ed11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ed120: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4ed120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ed124: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4ed124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4ed128: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4ed128u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4ed12c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ed12cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4ed130:
    // 0x4ed130: 0x95a211e8  lhu         $v0, 0x11E8($t5)
    ctx->pc = 0x4ed130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4584)));
    // 0x4ed134: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4ed134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ed138: 0xa7020000  sh          $v0, 0x0($t8)
    ctx->pc = 0x4ed138u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ed13c: 0x86031204  lh          $v1, 0x1204($s0)
    ctx->pc = 0x4ed13cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4612)));
    // 0x4ed140: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ED140u;
    {
        const bool branch_taken_0x4ed140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4ED144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED140u;
        // 0x4ed144: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed140) {
            ctx->pc = 0x4ED158u;
            goto label_4ed158;
        }
    }
    ctx->pc = 0x4ED148u;
    // 0x4ed148: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x4ed148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed14c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ed14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ed150: 0x813bcb8  j           func_4EF2E0
    ctx->pc = 0x4ED150u;
    ctx->pc = 0x4ED154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED150u;
    // 0x4ed154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2E0u;
    sub_004EF2E0_0x4ef2e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4ED158u;
label_4ed158:
    // 0x4ed158: 0x25630166  addiu       $v1, $t3, 0x166
    ctx->pc = 0x4ed158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 358));
    // 0x4ed15c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ed15cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ed160: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ed160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ed164: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ed164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ed168: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ed168u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ed16c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED16Cu;
        // 0x4ed170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED174u;
    // 0x4ed174: 0x0  nop
    ctx->pc = 0x4ed174u;
    // NOP
    ctx->pc = 0x4ed178u;
}
