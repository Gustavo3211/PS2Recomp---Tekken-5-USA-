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

// Function: sub_0049A010
// Address: 0x49a010 - 0x49a1d8
void sub_0049A010_0x49a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A010_0x49a010");
#endif

    switch (ctx->pc) {
        case 0x49a0a0u: goto label_49a0a0;
        default: break;
    }

    ctx->pc = 0x49a010u;

    // 0x49a010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49a014: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49a014u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49a018: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x49a018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x49a01c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x49a01cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x49a020: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x49a020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x49a024: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x49a024u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x49a028: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49a028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49a02c: 0x24e70b60  addiu       $a3, $a3, 0xB60
    ctx->pc = 0x49a02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2912));
    // 0x49a030: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49a030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49a034: 0x26100b58  addiu       $s0, $s0, 0xB58
    ctx->pc = 0x49a034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2904));
    // 0x49a038: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x49a038u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0B60u));
    // 0x49a03c: 0x24a50b3c  addiu       $a1, $a1, 0xB3C
    ctx->pc = 0x49a03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2876));
    // 0x49a040: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49a040u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B3Cu));
    // 0x49a044: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x49a044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a048: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x49a048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49a04c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x49a04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49a050: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a054: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x49a054u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0B60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B60u, _value); } while (0);
    // 0x49a058: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49a058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49a05c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a060: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49a060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49a064: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a068: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49a068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a06c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x49a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x49a070: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49a070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49a074: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a078: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49a078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49a07c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49a07cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a080: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49a080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49a084: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x49a084u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x49a088: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49a088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49a08c: 0x3c010051  lui         $at, 0x51
    ctx->pc = 0x49a08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)81 << 16));
    // 0x49a090: 0x24217e80  addiu       $at, $at, 0x7E80
    ctx->pc = 0x49a090u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32384));
    // 0x49a094: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x49a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x49a098: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x49A098u;
    SET_GPR_U32(ctx, 31, 0x49A0A0u);
    ctx->pc = 0x49A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A098u;
    // 0x49a09c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x49A098u, 0x49A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A0A0u;
label_49a0a0:
    // 0x49a0a0: 0x240200dd  addiu       $v0, $zero, 0xDD
    ctx->pc = 0x49a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x49a0a4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a0a8: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x49a0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x49a0ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a0b0: 0xa4600030  sh          $zero, 0x30($v1)
    ctx->pc = 0x49a0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x49a0b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x49a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49a0b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a0bc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49a0bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a0c0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x49a0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49a0c4: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x49a0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49a0c8: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x49a0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x49a0cc: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x49a0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x49a0d0: 0x24a80006  addiu       $t0, $a1, 0x6
    ctx->pc = 0x49a0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x49a0d4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x49a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x49a0d8: 0x24a90008  addiu       $t1, $a1, 0x8
    ctx->pc = 0x49a0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x49a0dc: 0x24aa000a  addiu       $t2, $a1, 0xA
    ctx->pc = 0x49a0dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x49a0e0: 0x24ab000c  addiu       $t3, $a1, 0xC
    ctx->pc = 0x49a0e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x49a0e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a0e8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49a0e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a0ec: 0x24a5000e  addiu       $a1, $a1, 0xE
    ctx->pc = 0x49a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
    // 0x49a0f0: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x49a0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x49a0f4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x49a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x49a0f8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a0fc: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x49a0fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49a100: 0x2484012c  addiu       $a0, $a0, 0x12C
    ctx->pc = 0x49a100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x49a104: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49a104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49a108: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49a108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49a10c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a110: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49a110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49a114: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49a114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49a118: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49a118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49a11c: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x49a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x49a120: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49a120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a124: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49a124u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49a128: 0xa4620134  sh          $v0, 0x134($v1)
    ctx->pc = 0x49a128u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 308), (uint16_t)GPR_U32(ctx, 2));
    // 0x49a12c: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x49a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x49a130: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49a130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a134: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x49a134u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49a138: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x49a138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x49a13c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49a140: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49a140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49a144: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a148: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49a14c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49a14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49a150: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49a150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49a154: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x49a154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x49a158: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49a158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a15c: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x49a15cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49a160: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x49a160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x49a164: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49a168: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49a168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49a16c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a170: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49a174: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49a178: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49a178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49a17c: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x49a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x49a180: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49a180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a184: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x49a184u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49a188: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x49a188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x49a18c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49a190: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49a190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49a194: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a198: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49a198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49a19c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49a19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49a1a0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49a1a4: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x49a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x49a1a8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x49a1a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49a1ac: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x49a1acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49a1b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a1b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49a1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a1b8: 0xa462014a  sh          $v0, 0x14A($v1)
    ctx->pc = 0x49a1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x49a1bc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x49a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x49a1c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x49a1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a1c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a1c8: 0xa440014c  sh          $zero, 0x14C($v0)
    ctx->pc = 0x49a1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 332), (uint16_t)GPR_U32(ctx, 0));
    // 0x49a1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x49A1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A1CCu;
        // 0x49a1d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A1D4u;
    // 0x49a1d4: 0x0  nop
    ctx->pc = 0x49a1d4u;
    // NOP
    ctx->pc = 0x49a1d8u;
}
