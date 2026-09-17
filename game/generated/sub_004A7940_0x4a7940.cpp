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

// Function: sub_004A7940
// Address: 0x4a7940 - 0x4a7dd8
void sub_004A7940_0x4a7940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7940_0x4a7940");
#endif

    switch (ctx->pc) {
        case 0x4a7b04u: goto label_4a7b04;
        case 0x4a7d1cu: goto label_4a7d1c;
        default: break;
    }

    ctx->pc = 0x4a7940u;

    // 0x4a7940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a7940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a7944: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a7944u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a7948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a794c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a794cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7950: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a7950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a7954: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4a7954u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4a7958: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a7958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a795c: 0x26480c44  addiu       $t0, $s2, 0xC44
    ctx->pc = 0x4a795cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 3140));
    // 0x4a7960: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4a7960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4a7964: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4a7964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4a7968: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4a7968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4a796c: 0x8607002e  lh          $a3, 0x2E($s0)
    ctx->pc = 0x4a796cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x4a7970: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a7970u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C44u));
    // 0x4a7974: 0xe91825  or          $v1, $a3, $t1
    ctx->pc = 0x4a7974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4a7978: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a797c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a797cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a7980: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4a7980u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4a7984: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4a7984u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7988: 0x10c00047  beqz        $a2, . + 4 + (0x47 << 2)
    ctx->pc = 0x4A7988u;
    {
        const bool branch_taken_0x4a7988 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7988u;
        // 0x4a798c: 0x3c14007f  lui         $s4, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7988) {
            ctx->pc = 0x4A7AA8u;
            goto label_4a7aa8;
        }
    }
    ctx->pc = 0x4A7990u;
    // 0x4a7990: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x4a7990u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7994: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A7994u;
    {
        const bool branch_taken_0x4a7994 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4A7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7994u;
        // 0x4a7998: 0x26840c48  addiu       $a0, $s4, 0xC48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7994) {
            ctx->pc = 0x4A79A8u;
            goto label_4a79a8;
        }
    }
    ctx->pc = 0x4A799Cu;
    // 0x4a799c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a79a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A79A0u;
    {
        const bool branch_taken_0x4a79a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79A0u;
        // 0x4a79a4: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a79a0) {
            ctx->pc = 0x4A79B4u;
            goto label_4a79b4;
        }
    }
    ctx->pc = 0x4A79A8u;
label_4a79a8:
    // 0x4a79a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a79ac: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a79acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a79b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a79b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a79b4:
    // 0x4a79b4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a79b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a79b8: 0x26440c44  addiu       $a0, $s2, 0xC44
    ctx->pc = 0x4a79b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3140));
    // 0x4a79bc: 0x26090026  addiu       $t1, $s0, 0x26
    ctx->pc = 0x4a79bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 38));
    // 0x4a79c0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a79c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a79c4: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x4a79c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a79c8: 0x260a002a  addiu       $t2, $s0, 0x2A
    ctx->pc = 0x4a79c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
    // 0x4a79cc: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4a79ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a79d0: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4a79d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4a79d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a79d8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4a79d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a79dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a79dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4a79e0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4a79e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a79e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a79e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a79e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a79e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a79ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a79ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a79f0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a79f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a79f4: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4a79f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a79f8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4a79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a79fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7a00: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7A00u;
    {
        const bool branch_taken_0x4a7a00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A00u;
        // 0x4a7a04: 0x26650c4c  addiu       $a1, $s3, 0xC4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a00) {
            ctx->pc = 0x4A7A18u;
            goto label_4a7a18;
        }
    }
    ctx->pc = 0x4A7A08u;
    // 0x4a7a08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7a0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7A0Cu;
    {
        const bool branch_taken_0x4a7a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A0Cu;
        // 0x4a7a10: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a0c) {
            ctx->pc = 0x4A7A24u;
            goto label_4a7a24;
        }
    }
    ctx->pc = 0x4A7A14u;
    // 0x4a7a14: 0x0  nop
    ctx->pc = 0x4a7a14u;
    // NOP
label_4a7a18:
    // 0x4a7a18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7a1c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7a20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a7a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a7a24:
    // 0x4a7a24: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a7a24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a7a28: 0x25640c48  addiu       $a0, $t3, 0xC48
    ctx->pc = 0x4a7a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 3144));
    // 0x4a7a2c: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4a7a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7a30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7a34: 0x91020c4c  lbu         $v0, 0xC4C($t0)
    ctx->pc = 0x4a7a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3148)));
    // 0x4a7a38: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4a7a38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7a3c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a7a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a7a40: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4a7a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4a7a44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a7a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a7a48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a7a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a7a4c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4a7a4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7a50: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4A7A50u;
    {
        const bool branch_taken_0x4a7a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A50u;
        // 0x4a7a54: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a50) {
            ctx->pc = 0x4A7AF0u;
            goto label_4a7af0;
        }
    }
    ctx->pc = 0x4A7A58u;
    // 0x4a7a58: 0x26480c44  addiu       $t0, $s2, 0xC44
    ctx->pc = 0x4a7a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 3140));
    // 0x4a7a5c: 0x24a50c50  addiu       $a1, $a1, 0xC50
    ctx->pc = 0x4a7a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3152));
    // 0x4a7a60: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4a7a60u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a7a64: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a7a64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7a68: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a7a68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7a6c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4a7a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7a70: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x4a7a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x4a7a74: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4a7a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4a7a78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7a7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7a80: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a7a84: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a7a84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a7a88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7a8c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a7a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a7a90: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4a7a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4a7a94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7a98: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4a7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4a7a9c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4A7A9Cu;
    {
        const bool branch_taken_0x4a7a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A9Cu;
        // 0x4a7aa0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a9c) {
            ctx->pc = 0x4A7AF0u;
            goto label_4a7af0;
        }
    }
    ctx->pc = 0x4A7AA4u;
    // 0x4a7aa4: 0x0  nop
    ctx->pc = 0x4a7aa4u;
    // NOP
label_4a7aa8:
    // 0x4a7aa8: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a7aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a7aac: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4a7aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7ab0: 0x24c60c50  addiu       $a2, $a2, 0xC50
    ctx->pc = 0x4a7ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3152));
    // 0x4a7ab4: 0x8607002a  lh          $a3, 0x2A($s0)
    ctx->pc = 0x4a7ab4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x4a7ab8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4a7ab8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0C50u));
    // 0x4a7abc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4a7abcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0C50u));
    // 0x4a7ac0: 0xe92025  or          $a0, $a3, $t1
    ctx->pc = 0x4a7ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4a7ac4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4a7ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4a7ac8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a7ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a7acc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7ad0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a7ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a7ad4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a7ad4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a7ad8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4a7ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4a7adc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4a7adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4a7ae0: 0x26090026  addiu       $t1, $s0, 0x26
    ctx->pc = 0x4a7ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 38));
    // 0x4a7ae4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a7ae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a7ae8: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4a7ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4a7aec: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4a7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_4a7af0:
    // 0x4a7af0: 0x26510c44  addiu       $s1, $s2, 0xC44
    ctx->pc = 0x4a7af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 3140));
    // 0x4a7af4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a7af4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a7af8: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4a7af8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a7afc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A7AFCu;
    SET_GPR_U32(ctx, 31, 0x4A7B04u);
    ctx->pc = 0x4A7B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7AFCu;
    // 0x4a7b00: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A7AFCu, 0x4A7B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7B04u;
label_4a7b04:
    // 0x4a7b04: 0x26890c48  addiu       $t1, $s4, 0xC48
    ctx->pc = 0x4a7b04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 3144));
    // 0x4a7b08: 0x26650c4c  addiu       $a1, $s3, 0xC4C
    ctx->pc = 0x4a7b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3148));
    // 0x4a7b0c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a7b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7b10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7b14: 0x34847fff  ori         $a0, $a0, 0x7FFF
    ctx->pc = 0x4a7b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x4a7b18: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4a7b18u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4a7b1c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a7b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7b20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7b24: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4a7b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a7b28: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a7b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a7b2c: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x4a7b2cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a7b30: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a7b30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a7b34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7b38: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a7b38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7b3c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4a7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a7b40: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a7b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a7b44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7b48: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a7b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a7b4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7b50: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a7b50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7b54: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7b58: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x4a7b58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x4a7b5c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a7b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a7b60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7b64: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a7b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a7b68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7b6c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a7b6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7b70: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a7b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4a7b74: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a7b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a7b78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7b7c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a7b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a7b80: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a7b80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7b84: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a7b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a7b88: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7b8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7b90: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4a7b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4a7b94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7b98: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a7b98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4a7b9c: 0x86070030  lh          $a3, 0x30($s0)
    ctx->pc = 0x4a7b9cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4a7ba0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4a7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a7ba4: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x4a7ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4a7ba8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7bac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a7bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a7bb0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4a7bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4a7bb4: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4a7bb4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a7bb8: 0x50c00043  beql        $a2, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x4A7BB8u;
    {
        const bool branch_taken_0x4a7bb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7bb8) {
            ctx->pc = 0x4A7BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7BB8u;
            // 0x4a7bbc: 0x3c06007f  lui         $a2, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7CC8u;
            goto label_4a7cc8;
        }
    }
    ctx->pc = 0x4A7BC0u;
    // 0x4a7bc0: 0x4c20005  bltzl       $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7BC0u;
    {
        const bool branch_taken_0x4a7bc0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x4a7bc0) {
            ctx->pc = 0x4A7BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7BC0u;
            // 0x4a7bc4: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7BD8u;
            goto label_4a7bd8;
        }
    }
    ctx->pc = 0x4A7BC8u;
    // 0x4a7bc8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4a7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a7bcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A7BCCu;
    {
        const bool branch_taken_0x4a7bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7BCCu;
        // 0x4a7bd0: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7bcc) {
            ctx->pc = 0x4A7BE0u;
            goto label_4a7be0;
        }
    }
    ctx->pc = 0x4A7BD4u;
    // 0x4a7bd4: 0x0  nop
    ctx->pc = 0x4a7bd4u;
    // NOP
label_4a7bd8:
    // 0x4a7bd8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7bdc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a7bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a7be0:
    // 0x4a7be0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4a7be0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4a7be4: 0x26090028  addiu       $t1, $s0, 0x28
    ctx->pc = 0x4a7be4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x4a7be8: 0x26440c44  addiu       $a0, $s2, 0xC44
    ctx->pc = 0x4a7be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3140));
    // 0x4a7bec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a7becu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7bf0: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x4a7bf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a7bf4: 0x260a002c  addiu       $t2, $s0, 0x2C
    ctx->pc = 0x4a7bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x4a7bf8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a7bf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7bfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7c00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a7c04: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a7c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a7c08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7c0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7c10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a7c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a7c14: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a7c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7c18: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4a7c18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a7c1c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4a7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a7c20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7c24: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A7C24u;
    {
        const bool branch_taken_0x4a7c24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A7C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C24u;
        // 0x4a7c28: 0x26650c4c  addiu       $a1, $s3, 0xC4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7c24) {
            ctx->pc = 0x4A7C38u;
            goto label_4a7c38;
        }
    }
    ctx->pc = 0x4A7C2Cu;
    // 0x4a7c2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7c30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A7C30u;
    {
        const bool branch_taken_0x4a7c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C30u;
        // 0x4a7c34: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7c30) {
            ctx->pc = 0x4A7C44u;
            goto label_4a7c44;
        }
    }
    ctx->pc = 0x4A7C38u;
label_4a7c38:
    // 0x4a7c38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7c3c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a7c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7c40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a7c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a7c44:
    // 0x4a7c44: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a7c44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a7c48: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x4a7c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7c4c: 0x26840c48  addiu       $a0, $s4, 0xC48
    ctx->pc = 0x4a7c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3144));
    // 0x4a7c50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7c54: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x4a7c54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7c58: 0x92620c4c  lbu         $v0, 0xC4C($s3)
    ctx->pc = 0x4a7c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3148)));
    // 0x4a7c5c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a7c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a7c60: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x4a7c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x4a7c64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a7c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a7c68: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a7c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a7c6c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4a7c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7c70: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4A7C70u;
    {
        const bool branch_taken_0x4a7c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C70u;
        // 0x4a7c74: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7c70) {
            ctx->pc = 0x4A7D08u;
            goto label_4a7d08;
        }
    }
    ctx->pc = 0x4A7C78u;
    // 0x4a7c78: 0x26480c44  addiu       $t0, $s2, 0xC44
    ctx->pc = 0x4a7c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 3140));
    // 0x4a7c7c: 0x24a50c50  addiu       $a1, $a1, 0xC50
    ctx->pc = 0x4a7c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3152));
    // 0x4a7c80: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4a7c80u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a7c84: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a7c84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7c88: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a7c88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7c8c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4a7c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7c90: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x4a7c90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x4a7c94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4a7c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4a7c98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7c9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7ca0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a7ca4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a7ca4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a7ca8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7cac: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a7cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a7cb0: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4a7cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4a7cb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7cb8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4a7cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4a7cbc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4A7CBCu;
    {
        const bool branch_taken_0x4a7cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7CBCu;
        // 0x4a7cc0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7cbc) {
            ctx->pc = 0x4A7D08u;
            goto label_4a7d08;
        }
    }
    ctx->pc = 0x4A7CC4u;
    // 0x4a7cc4: 0x0  nop
    ctx->pc = 0x4a7cc4u;
    // NOP
label_4a7cc8:
    // 0x4a7cc8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4a7cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7ccc: 0x24c60c50  addiu       $a2, $a2, 0xC50
    ctx->pc = 0x4a7cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3152));
    // 0x4a7cd0: 0x8607002c  lh          $a3, 0x2C($s0)
    ctx->pc = 0x4a7cd0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x4a7cd4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4a7cd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a7cd8: 0x26090028  addiu       $t1, $s0, 0x28
    ctx->pc = 0x4a7cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x4a7cdc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4a7cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a7ce0: 0xe82825  or          $a1, $a3, $t0
    ctx->pc = 0x4a7ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4a7ce4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4a7ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4a7ce8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a7ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a7cec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7cf0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a7cf4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a7cf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a7cf8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a7cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4a7cfc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a7cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a7d00: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a7d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a7d04: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4a7d04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_4a7d08:
    // 0x4a7d08: 0x26430c44  addiu       $v1, $s2, 0xC44
    ctx->pc = 0x4a7d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3140));
    // 0x4a7d0c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4a7d0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a7d10: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4a7d10u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a7d14: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A7D14u;
    SET_GPR_U32(ctx, 31, 0x4A7D1Cu);
    ctx->pc = 0x4A7D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7D14u;
    // 0x4a7d18: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A7D14u, 0x4A7D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7D1Cu;
label_4a7d1c:
    // 0x4a7d1c: 0x26880c48  addiu       $t0, $s4, 0xC48
    ctx->pc = 0x4a7d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 3144));
    // 0x4a7d20: 0x26650c4c  addiu       $a1, $s3, 0xC4C
    ctx->pc = 0x4a7d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3148));
    // 0x4a7d24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a7d24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a7d28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7d2c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a7d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7d30: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4a7d30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4a7d34: 0x34847fff  ori         $a0, $a0, 0x7FFF
    ctx->pc = 0x4a7d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x4a7d38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7d3c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a7d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7d40: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a7d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a7d44: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4a7d44u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7d48: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a7d48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a7d4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7d50: 0x26090014  addiu       $t1, $s0, 0x14
    ctx->pc = 0x4a7d50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4a7d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a7d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a7d58: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a7d58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7d5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a7d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a7d60: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4a7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a7d64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a7d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a7d68: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a7d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a7d6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4a7d6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a7d70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7d74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4a7d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a7d78: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a7d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a7d7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7d80: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a7d80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7d84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7d88: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x4a7d88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x4a7d8c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a7d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a7d90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7d94: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a7d94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a7d98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7d9c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a7d9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7da0: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a7da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4a7da4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a7da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a7da8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7dac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a7dacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a7db0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a7db0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7db4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4a7db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a7db8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7dbc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4a7dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4a7dc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7dc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7dc8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4a7dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4a7dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A7DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DCCu;
        // 0x4a7dd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A7DD4u;
    // 0x4a7dd4: 0x0  nop
    ctx->pc = 0x4a7dd4u;
    // NOP
    ctx->pc = 0x4a7dd8u;
}
