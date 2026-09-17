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

// Function: sub_004D0100
// Address: 0x4d0100 - 0x4d0560
void sub_004D0100_0x4d0100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0100_0x4d0100");
#endif

    switch (ctx->pc) {
        case 0x4d02c0u: goto label_4d02c0;
        case 0x4d0448u: goto label_4d0448;
        case 0x4d0450u: goto label_4d0450;
        case 0x4d0458u: goto label_4d0458;
        case 0x4d0460u: goto label_4d0460;
        default: break;
    }

    ctx->pc = 0x4d0100u;

    // 0x4d0100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d0100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4d0104: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4d0104u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4d0108: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4d0108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4d010c: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4d010cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4d0110: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4d0110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4d0114: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4d0114u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0118: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4d0118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4d011c: 0x26a40fe8  addiu       $a0, $s5, 0xFE8
    ctx->pc = 0x4d011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4072));
    // 0x4d0120: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4d0120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4d0124: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4d0124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4d0128: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4d0128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4d012c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4d012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4d0130: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4d0130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4d0134: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4d0134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4d0138: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4d0138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4d013c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d013cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FE8u));
    // 0x4d0140: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4d0140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d0144: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d0144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d0148: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4d0148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4d014c: 0x24217350  addiu       $at, $at, 0x7350
    ctx->pc = 0x4d014cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29520));
    // 0x4d0150: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4d0150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4d0154: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4d0154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4d0158: 0x87c30162  lh          $v1, 0x162($fp)
    ctx->pc = 0x4d0158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 354)));
    // 0x4d015c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D015Cu;
    {
        const bool branch_taken_0x4d015c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D015Cu;
        // 0x4d0160: 0x25250fe4  addiu       $a1, $t1, 0xFE4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4068));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d015c) {
            ctx->pc = 0x4D0170u;
            goto label_4d0170;
        }
    }
    ctx->pc = 0x4D0164u;
    // 0x4d0164: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d0164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d0168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4D0168u;
    {
        const bool branch_taken_0x4d0168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0168u;
        // 0x4d016c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0168) {
            ctx->pc = 0x4D017Cu;
            goto label_4d017c;
        }
    }
    ctx->pc = 0x4D0170u;
label_4d0170:
    // 0x4d0170: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d0170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d0174: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d0174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d0178: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4d0178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d017c:
    // 0x4d017c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d017cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d0180: 0x26b50fe8  addiu       $s5, $s5, 0xFE8
    ctx->pc = 0x4d0180u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4072));
    // 0x4d0184: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4d0184u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4d0188: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d0188u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4d018c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4d018cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d0190: 0x26520fd4  addiu       $s2, $s2, 0xFD4
    ctx->pc = 0x4d0190u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4052));
    // 0x4d0194: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d0194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0FD4u));
    // 0x4d0198: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4d0198u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4d019c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4d019cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d01a0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4d01a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4d01a4: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4d01a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4d01a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d01a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d01ac: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d01acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4d01b0: 0x26940fd8  addiu       $s4, $s4, 0xFD8
    ctx->pc = 0x4d01b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4056));
    // 0x4d01b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d01b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d01b8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4d01b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d01bc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4d01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4d01c0: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x4d01c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4d01c4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d01c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d01c8: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d01c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d01cc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4d01ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d01d0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4d01d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4d01d4: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4d01d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4d01d8: 0x26100fdc  addiu       $s0, $s0, 0xFDC
    ctx->pc = 0x4d01d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4060));
    // 0x4d01dc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d01dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d01e0: 0x27ce0026  addiu       $t6, $fp, 0x26
    ctx->pc = 0x4d01e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 30), 38));
    // 0x4d01e4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d01e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d01e8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d01ec: 0x24420fe4  addiu       $v0, $v0, 0xFE4
    ctx->pc = 0x4d01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4068));
    // 0x4d01f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d01f4: 0x94490000  lhu         $t1, 0x0($v0)
    ctx->pc = 0x4d01f4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)FAST_READ16(0x7F0FE4u));
    // 0x4d01f8: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4d01f8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4d01fc: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4d01fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4d0200: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d0200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0204: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d0204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d0208: 0x26f70fd0  addiu       $s7, $s7, 0xFD0
    ctx->pc = 0x4d0208u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4048));
    // 0x4d020c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4d020cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d0210: 0x93c00  sll         $a3, $t1, 16
    ctx->pc = 0x4d0210u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4d0214: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4d0214u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4d0218: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4d0218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4d021c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d021cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d0220: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x4d0220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x4d0224: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d0224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d0228: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4d0228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d022c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d022cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d0230: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d0230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d0234: 0x24420fcc  addiu       $v0, $v0, 0xFCC
    ctx->pc = 0x4d0234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4044));
    // 0x4d0238: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4d0238u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4d023c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4d023cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d0240: 0x27d60028  addiu       $s6, $fp, 0x28
    ctx->pc = 0x4d0240u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 40));
    // 0x4d0244: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d0244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0248: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d0248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d024c: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x4d024cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d0250: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d0250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d0254: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x4d0254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x4d0258: 0x3c130073  lui         $s3, 0x73
    ctx->pc = 0x4d0258u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
    // 0x4d025c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d025cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d0260: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d0260u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d0264: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d0264u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d0268: 0x2673d680  addiu       $s3, $s3, -0x2980
    ctx->pc = 0x4d0268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x4d026c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d0270: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d0270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d0274: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d0274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d0278: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d0278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d027c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d027cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0280: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4d0280u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4d0284: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d0284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d0288: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d0288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d028c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d028cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d0290: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d0290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d0294: 0x24630fcc  addiu       $v1, $v1, 0xFCC
    ctx->pc = 0x4d0294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4044));
    // 0x4d0298: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4d0298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4d029c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d02a0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d02a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d02a4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x4d02a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x4d02a8: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4d02a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d02ac: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d02acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d02b0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4d02b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4d02b4: 0xaee80000  sw          $t0, 0x0($s7)
    ctx->pc = 0x4d02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x4d02b8: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D02B8u;
    SET_GPR_U32(ctx, 31, 0x4D02C0u);
    ctx->pc = 0x4D02BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D02B8u;
    // 0x4d02bc: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D02B8u, 0x4D02C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D02C0u;
label_4d02c0:
    // 0x4d02c0: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x4d02c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d02c4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x4d02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x4d02c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d02c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d02cc: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4d02ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d02d0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4d02d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4d02d4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d02d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d02d8: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4d02d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d02dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d02dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d02e0: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x4d02e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d02e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d02e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d02e8: 0x860b0000  lh          $t3, 0x0($s0)
    ctx->pc = 0x4d02e8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d02ec: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d02ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4d02f0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4d02f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d02f4: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4d02f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4d02f8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d02f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d02fc: 0xae4a0000  sw          $t2, 0x0($s2)
    ctx->pc = 0x4d02fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 10));
    // 0x4d0300: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4d0300u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4d0304: 0x24630fe4  addiu       $v1, $v1, 0xFE4
    ctx->pc = 0x4d0304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4068));
    // 0x4d0308: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d0308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d030c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x4d030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x4d0310: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d0310u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d0314: 0x946e0000  lhu         $t6, 0x0($v1)
    ctx->pc = 0x4d0314u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)FAST_READ16(0x7F0FE4u));
    // 0x4d0318: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d0318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d031c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d031cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d0320: 0x24630fcc  addiu       $v1, $v1, 0xFCC
    ctx->pc = 0x4d0320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4044));
    // 0x4d0324: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d0324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d0328: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x4d0328u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d032c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d032cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d0330: 0x964c0000  lhu         $t4, 0x0($s2)
    ctx->pc = 0x4d0330u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d0334: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4d0334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4d0338: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4d0338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d033c: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4d033cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4d0340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d0340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0344: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4d0344u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x4d0348: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d0348u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d034c: 0xe6c00  sll         $t5, $t6, 16
    ctx->pc = 0x4d034cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x4d0350: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d0350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d0354: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x4d0354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x4d0358: 0xd6c03  sra         $t5, $t5, 16
    ctx->pc = 0x4d0358u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 16));
    // 0x4d035c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4d035cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d0360: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d0360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d0364: 0xa66c2334  sh          $t4, 0x2334($s3)
    ctx->pc = 0x4d0364u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 9012), (uint16_t)GPR_U32(ctx, 12));
    // 0x4d0368: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d0368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d036c: 0xa6632336  sh          $v1, 0x2336($s3)
    ctx->pc = 0x4d036cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d0370: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4d0370u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4d0374: 0x1715825  or          $t3, $t3, $s1
    ctx->pc = 0x4d0374u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 17));
    // 0x4d0378: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x4d0378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x4d037c: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4d037cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4d0380: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d0380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d0384: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d0384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0388: 0xa6622338  sh          $v0, 0x2338($s3)
    ctx->pc = 0x4d0388u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d038c: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4d038cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d0390: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x4d0390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x4d0394: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x4d0394u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    // 0x4d0398: 0x252b0002  addiu       $t3, $t1, 0x2
    ctx->pc = 0x4d0398u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x4d039c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d039cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4d03a0: 0x252c0004  addiu       $t4, $t1, 0x4
    ctx->pc = 0x4d03a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4d03a4: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4d03a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4d03a8: 0xae4a0000  sw          $t2, 0x0($s2)
    ctx->pc = 0x4d03a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 10));
    // 0x4d03ac: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4d03acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d03b0: 0xaeab0000  sw          $t3, 0x0($s5)
    ctx->pc = 0x4d03b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 11));
    // 0x4d03b4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d03b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d03b8: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4d03b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4d03bc: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4d03bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x4d03c0: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4d03c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d03c4: 0xaeac0000  sw          $t4, 0x0($s5)
    ctx->pc = 0x4d03c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 12));
    // 0x4d03c8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d03c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d03cc: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d03ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d03d0: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4d03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4d03d4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d03d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d03d8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d03d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d03dc: 0x4e1026  xor         $v0, $v0, $t6
    ctx->pc = 0x4d03dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 14));
    // 0x4d03e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d03e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d03e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d03e8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d03e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d03ec: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d03ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d03f0: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4d03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4d03f4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d03f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d03f8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d03f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d03fc: 0x4d1023  subu        $v0, $v0, $t5
    ctx->pc = 0x4d03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x4d0400: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d0400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d0404: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d0404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d0408: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4d0408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4d040c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x4d040cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d0410: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4d0410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4d0414: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d0414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d0418: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d0418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d041c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d0420: 0x24420fcc  addiu       $v0, $v0, 0xFCC
    ctx->pc = 0x4d0420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4044));
    // 0x4d0424: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x4d0424u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0FCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0FCCu, _value); } while (0);
    // 0x4d0428: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4d0428u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d042c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4d042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d0430: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d0430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4d0434: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d0434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d0438: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d0438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d043c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4d043cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x4d0440: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D0440u;
    SET_GPR_U32(ctx, 31, 0x4D0448u);
    ctx->pc = 0x4D0444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0440u;
    // 0x4d0444: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D0440u, 0x4D0448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0448u;
label_4d0448:
    // 0x4d0448: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D0448u;
    SET_GPR_U32(ctx, 31, 0x4D0450u);
    ctx->pc = 0x4D044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0448u;
    // 0x4d044c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D0448u, 0x4D0450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0450u;
label_4d0450:
    // 0x4d0450: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D0450u;
    SET_GPR_U32(ctx, 31, 0x4D0458u);
    ctx->pc = 0x4D0454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0450u;
    // 0x4d0454: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D0450u, 0x4D0458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0458u;
label_4d0458:
    // 0x4d0458: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D0458u;
    SET_GPR_U32(ctx, 31, 0x4D0460u);
    ctx->pc = 0x4D045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0458u;
    // 0x4d045c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D0458u, 0x4D0460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0460u;
label_4d0460:
    // 0x4d0460: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d0460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d0464: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4d0464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d0468: 0x266d2340  addiu       $t5, $s3, 0x2340
    ctx->pc = 0x4d0468u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 9024));
    // 0x4d046c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4d046cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0470: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d0470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d0474: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d0474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d0478: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d0478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d047c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d047cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d0480: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4d0480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4d0484: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4d0484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4d0488: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4d0488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4d048c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4d048cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4d0490: 0x266b2344  addiu       $t3, $s3, 0x2344
    ctx->pc = 0x4d0490u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 9028));
    // 0x4d0494: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4d0494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4d0498: 0x266c2348  addiu       $t4, $s3, 0x2348
    ctx->pc = 0x4d0498u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 9032));
    // 0x4d049c: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4d049cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4d04a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4d04a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d04a4: 0x8fc50124  lw          $a1, 0x124($fp)
    ctx->pc = 0x4d04a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
    // 0x4d04a8: 0x25ce0fcc  addiu       $t6, $t6, 0xFCC
    ctx->pc = 0x4d04a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4044));
    // 0x4d04ac: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x4d04acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d04b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4d04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4d04b4: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4d04b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d04b8: 0x8d8a0000  lw          $t2, 0x0($t4)
    ctx->pc = 0x4d04b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d04bc: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4d04bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4d04c0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4d04c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4d04c4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4d04c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d04c8: 0x8fc20128  lw          $v0, 0x128($fp)
    ctx->pc = 0x4d04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
    // 0x4d04cc: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4d04ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d04d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d04d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d04d4: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x4d04d4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0FCCu));
    // 0x4d04d8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4d04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4d04dc: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x4d04dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4d04e0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d04e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d04e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d04e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d04e8: 0x8fc2012c  lw          $v0, 0x12C($fp)
    ctx->pc = 0x4d04e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 300)));
    // 0x4d04ec: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x4d04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x4d04f0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d04f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d04f4: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4d04f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4d04f8: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x4d04f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x4d04fc: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4d04fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4d0500: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x4d0500u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x4d0504: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4d0504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0508: 0x97c201b6  lhu         $v0, 0x1B6($fp)
    ctx->pc = 0x4d0508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 438)));
    // 0x4d050c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4d050cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d0510: 0xa6622332  sh          $v0, 0x2332($s3)
    ctx->pc = 0x4d0510u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 9010), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d0514: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4d0514u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d0518: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4d0518u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d051c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4d051cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4d0520: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4d0520u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4d0524: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x4d0524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4d0528: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d0528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4d052c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4d052cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d0530: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4d0530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4d0534: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4d0534u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d0538: 0xadc70000  sw          $a3, 0x0($t6)
    ctx->pc = 0x4d0538u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    // 0x4d053c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4d053cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d0540: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d0540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d0544: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4d0544u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4d0548: 0xa662232c  sh          $v0, 0x232C($s3)
    ctx->pc = 0x4d0548u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 9004), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d054c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4d054cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d0550: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4d0550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d0554: 0x813d6c2  j           func_4F5B08
    ctx->pc = 0x4D0554u;
    ctx->pc = 0x4D0558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0554u;
    // 0x4d0558: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    sub_004F5B08_0x4f5b08(rdram, ctx, runtime); return;
    ctx->pc = 0x4D055Cu;
    // 0x4d055c: 0x0  nop
    ctx->pc = 0x4d055cu;
    // NOP
    ctx->pc = 0x4d0560u;
}
