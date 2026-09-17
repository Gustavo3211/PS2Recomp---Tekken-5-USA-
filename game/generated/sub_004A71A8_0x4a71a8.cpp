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

// Function: sub_004A71A8
// Address: 0x4a71a8 - 0x4a7508
void sub_004A71A8_0x4a71a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A71A8_0x4a71a8");
#endif

    ctx->pc = 0x4a71a8u;

    // 0x4a71a8: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4a71a8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4a71ac: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4a71acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a71b0: 0x25880c44  addiu       $t0, $t4, 0xC44
    ctx->pc = 0x4a71b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3140));
    // 0x4a71b4: 0x8527002e  lh          $a3, 0x2E($t1)
    ctx->pc = 0x4a71b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 46)));
    // 0x4a71b8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C44u));
    // 0x4a71bc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4a71bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4a71c0: 0xea1825  or          $v1, $a3, $t2
    ctx->pc = 0x4a71c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x4a71c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a71c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a71c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a71c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a71cc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4a71ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4a71d0: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4a71d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a71d4: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x4A71D4u;
    {
        const bool branch_taken_0x4a71d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A71D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A71D4u;
        // 0x4a71d8: 0x3c0d007f  lui         $t5, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a71d4) {
            ctx->pc = 0x4A72E8u;
            goto label_4a72e8;
        }
    }
    ctx->pc = 0x4A71DCu;
    // 0x4a71dc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A71DCu;
    {
        const bool branch_taken_0x4a71dc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4A71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A71DCu;
        // 0x4a71e0: 0x25a50c48  addiu       $a1, $t5, 0xC48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 3144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a71dc) {
            ctx->pc = 0x4A71F0u;
            goto label_4a71f0;
        }
    }
    ctx->pc = 0x4A71E4u;
    // 0x4a71e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a71e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A71E8u;
    {
        const bool branch_taken_0x4a71e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A71E8u;
        // 0x4a71ec: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a71e8) {
            ctx->pc = 0x4A71FCu;
            goto label_4a71fc;
        }
    }
    ctx->pc = 0x4A71F0u;
label_4a71f0:
    // 0x4a71f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a71f4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a71f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a71f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a71fc:
    // 0x4a71fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a71fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a7200: 0x25840c44  addiu       $a0, $t4, 0xC44
    ctx->pc = 0x4a7200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 3140));
    // 0x4a7204: 0x252b0026  addiu       $t3, $t1, 0x26
    ctx->pc = 0x4a7204u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 38));
    // 0x4a7208: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a7208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a720c: 0x85650000  lh          $a1, 0x0($t3)
    ctx->pc = 0x4a720cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a7210: 0x252a002a  addiu       $t2, $t1, 0x2A
    ctx->pc = 0x4a7210u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 42));
    // 0x4a7214: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a7214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7218: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4a7218u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4a721c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7220: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a7220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a7224: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a7224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a7228: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a722c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7230: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a7230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a7234: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a7234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7238: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4a7238u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a723c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4a723cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a7240: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7244: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A7244u;
    {
        const bool branch_taken_0x4a7244 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A7248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7244u;
        // 0x4a7248: 0x25050c4c  addiu       $a1, $t0, 0xC4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 3148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7244) {
            ctx->pc = 0x4A7258u;
            goto label_4a7258;
        }
    }
    ctx->pc = 0x4A724Cu;
    // 0x4a724c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7250: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A7250u;
    {
        const bool branch_taken_0x4a7250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7250u;
        // 0x4a7254: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7250) {
            ctx->pc = 0x4A7264u;
            goto label_4a7264;
        }
    }
    ctx->pc = 0x4A7258u;
label_4a7258:
    // 0x4a7258: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a725c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7260: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a7260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a7264:
    // 0x4a7264: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a7264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a7268: 0x25a40c48  addiu       $a0, $t5, 0xC48
    ctx->pc = 0x4a7268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 3144));
    // 0x4a726c: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4a726cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7270: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7274: 0x91020c4c  lbu         $v0, 0xC4C($t0)
    ctx->pc = 0x4a7274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3148)));
    // 0x4a7278: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4a7278u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a727c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a727cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a7280: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4a7280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4a7284: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a7284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a7288: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a7288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a728c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4a728cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7290: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4A7290u;
    {
        const bool branch_taken_0x4a7290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7290u;
        // 0x4a7294: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7290) {
            ctx->pc = 0x4A732Cu;
            goto label_4a732c;
        }
    }
    ctx->pc = 0x4A7298u;
    // 0x4a7298: 0x25880c44  addiu       $t0, $t4, 0xC44
    ctx->pc = 0x4a7298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3140));
    // 0x4a729c: 0x24a50c50  addiu       $a1, $a1, 0xC50
    ctx->pc = 0x4a729cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3152));
    // 0x4a72a0: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4a72a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a72a4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a72a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a72a8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a72a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a72ac: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4a72acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a72b0: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x4a72b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x4a72b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4a72b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4a72b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a72b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a72bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a72bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a72c0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a72c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a72c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a72c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a72c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a72c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a72cc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a72ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a72d0: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4a72d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4a72d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a72d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a72d8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4a72d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4a72dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4A72DCu;
    {
        const bool branch_taken_0x4a72dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72DCu;
        // 0x4a72e0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a72dc) {
            ctx->pc = 0x4A7330u;
            goto label_4a7330;
        }
    }
    ctx->pc = 0x4A72E4u;
    // 0x4a72e4: 0x0  nop
    ctx->pc = 0x4a72e4u;
    // NOP
label_4a72e8:
    // 0x4a72e8: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a72e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a72ec: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4a72ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a72f0: 0x24c60c50  addiu       $a2, $a2, 0xC50
    ctx->pc = 0x4a72f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3152));
    // 0x4a72f4: 0x8527002a  lh          $a3, 0x2A($t1)
    ctx->pc = 0x4a72f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 42)));
    // 0x4a72f8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4a72f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0C50u));
    // 0x4a72fc: 0x252b0026  addiu       $t3, $t1, 0x26
    ctx->pc = 0x4a72fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 38));
    // 0x4a7300: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4a7300u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0C50u));
    // 0x4a7304: 0xea2825  or          $a1, $a3, $t2
    ctx->pc = 0x4a7304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x4a7308: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4a7308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4a730c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a730cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a7310: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7314: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a7318: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a7318u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a731c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4a731cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4a7320: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4a7320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4a7324: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a7324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a7328: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4a7328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_4a732c:
    // 0x4a732c: 0x25880c44  addiu       $t0, $t4, 0xC44
    ctx->pc = 0x4a732cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3140));
label_4a7330:
    // 0x4a7330: 0x25240010  addiu       $a0, $t1, 0x10
    ctx->pc = 0x4a7330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x4a7334: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4a7334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7338: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4a7338u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4a733c: 0xa5630000  sh          $v1, 0x0($t3)
    ctx->pc = 0x4a733cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a7340: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4a7340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7344: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7348: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a734c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7350: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4a7350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4a7354: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7358: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a7358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a735c: 0x85270030  lh          $a3, 0x30($t1)
    ctx->pc = 0x4a735cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x4a7360: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a7360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7364: 0xea1825  or          $v1, $a3, $t2
    ctx->pc = 0x4a7364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x4a7368: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a736c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a736cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a7370: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4a7370u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4a7374: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4a7374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7378: 0x10800045  beqz        $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x4A7378u;
    {
        const bool branch_taken_0x4a7378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7378u;
        // 0x4a737c: 0x3c0d007f  lui         $t5, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7378) {
            ctx->pc = 0x4A7490u;
            goto label_4a7490;
        }
    }
    ctx->pc = 0x4A7380u;
    // 0x4a7380: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7380u;
    {
        const bool branch_taken_0x4a7380 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4A7384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7380u;
        // 0x4a7384: 0x25a50c48  addiu       $a1, $t5, 0xC48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 3144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7380) {
            ctx->pc = 0x4A7398u;
            goto label_4a7398;
        }
    }
    ctx->pc = 0x4A7388u;
    // 0x4a7388: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a7388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a738c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A738Cu;
    {
        const bool branch_taken_0x4a738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A738Cu;
        // 0x4a7390: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a738c) {
            ctx->pc = 0x4A73A4u;
            goto label_4a73a4;
        }
    }
    ctx->pc = 0x4A7394u;
    // 0x4a7394: 0x0  nop
    ctx->pc = 0x4a7394u;
    // NOP
label_4a7398:
    // 0x4a7398: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a739c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a73a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a73a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a73a4:
    // 0x4a73a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a73a8: 0x25840c44  addiu       $a0, $t4, 0xC44
    ctx->pc = 0x4a73a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 3140));
    // 0x4a73ac: 0x252b0028  addiu       $t3, $t1, 0x28
    ctx->pc = 0x4a73acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
    // 0x4a73b0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a73b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a73b4: 0x85650000  lh          $a1, 0x0($t3)
    ctx->pc = 0x4a73b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a73b8: 0x252a002c  addiu       $t2, $t1, 0x2C
    ctx->pc = 0x4a73b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 44));
    // 0x4a73bc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a73bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a73c0: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4a73c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4a73c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a73c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a73cc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a73ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a73d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a73d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a73d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a73d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a73d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a73d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a73dc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a73dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a73e0: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4a73e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a73e4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4a73e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a73e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a73ec: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A73ECu;
    {
        const bool branch_taken_0x4a73ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A73ECu;
        // 0x4a73f0: 0x25050c4c  addiu       $a1, $t0, 0xC4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 3148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a73ec) {
            ctx->pc = 0x4A7400u;
            goto label_4a7400;
        }
    }
    ctx->pc = 0x4A73F4u;
    // 0x4a73f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a73f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A73F8u;
    {
        const bool branch_taken_0x4a73f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A73F8u;
        // 0x4a73fc: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a73f8) {
            ctx->pc = 0x4A740Cu;
            goto label_4a740c;
        }
    }
    ctx->pc = 0x4A7400u;
label_4a7400:
    // 0x4a7400: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7404: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a7404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7408: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a7408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a740c:
    // 0x4a740c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a740cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a7410: 0x25a40c48  addiu       $a0, $t5, 0xC48
    ctx->pc = 0x4a7410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 3144));
    // 0x4a7414: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4a7414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7418: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a741c: 0x91020c4c  lbu         $v0, 0xC4C($t0)
    ctx->pc = 0x4a741cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3148)));
    // 0x4a7420: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4a7420u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7424: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a7424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a7428: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4a7428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4a742c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a742cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a7430: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a7430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a7434: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4a7434u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7438: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4A7438u;
    {
        const bool branch_taken_0x4a7438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7438u;
        // 0x4a743c: 0x25880c44  addiu       $t0, $t4, 0xC44 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7438) {
            ctx->pc = 0x4A74D4u;
            goto label_4a74d4;
        }
    }
    ctx->pc = 0x4A7440u;
    // 0x4a7440: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a7440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a7444: 0x24a50c50  addiu       $a1, $a1, 0xC50
    ctx->pc = 0x4a7444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3152));
    // 0x4a7448: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4a7448u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a744c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a744cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0C50u));
    // 0x4a7450: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a7450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7454: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4a7454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7458: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x4a7458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x4a745c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4a745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4a7460: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7460u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C50u));
    // 0x4a7464: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7468: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a746c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a746cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a7470: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7474: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a7474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a7478: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4a7478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4a747c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a747cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7480: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4a7480u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4a7484: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4A7484u;
    {
        const bool branch_taken_0x4a7484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7484u;
        // 0x4a7488: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7484) {
            ctx->pc = 0x4A74D4u;
            goto label_4a74d4;
        }
    }
    ctx->pc = 0x4A748Cu;
    // 0x4a748c: 0x0  nop
    ctx->pc = 0x4a748cu;
    // NOP
label_4a7490:
    // 0x4a7490: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a7490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a7494: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4a7494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7498: 0x24c60c50  addiu       $a2, $a2, 0xC50
    ctx->pc = 0x4a7498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3152));
    // 0x4a749c: 0x8527002c  lh          $a3, 0x2C($t1)
    ctx->pc = 0x4a749cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x4a74a0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4a74a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0C50u));
    // 0x4a74a4: 0x252b0028  addiu       $t3, $t1, 0x28
    ctx->pc = 0x4a74a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
    // 0x4a74a8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4a74a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0C50u));
    // 0x4a74ac: 0xea2825  or          $a1, $a3, $t2
    ctx->pc = 0x4a74acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x4a74b0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4a74b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4a74b4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a74b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a74b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a74bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a74bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a74c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a74c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a74c4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4a74c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4a74c8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4a74c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4a74cc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a74ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a74d0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4a74d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_4a74d4:
    // 0x4a74d4: 0x25840c44  addiu       $a0, $t4, 0xC44
    ctx->pc = 0x4a74d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 3140));
    // 0x4a74d8: 0x25260014  addiu       $a2, $t1, 0x14
    ctx->pc = 0x4a74d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x4a74dc: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4a74dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a74e0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a74e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a74e4: 0xa5630000  sh          $v1, 0x0($t3)
    ctx->pc = 0x4a74e4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a74e8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a74e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a74ec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a74f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a74f4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4a74f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a74f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a74f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a74fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a74fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7500: 0x3e00008  jr          $ra
    ctx->pc = 0x4A7500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7500u;
        // 0x4a7504: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A7508u;
}
