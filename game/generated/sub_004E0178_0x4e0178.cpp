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

// Function: sub_004E0178
// Address: 0x4e0178 - 0x4e0c98
void sub_004E0178_0x4e0178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0178_0x4e0178");
#endif

    switch (ctx->pc) {
        case 0x4e0198u: goto label_4e0198;
        case 0x4e01b8u: goto label_4e01b8;
        case 0x4e044cu: goto label_4e044c;
        case 0x4e0454u: goto label_4e0454;
        case 0x4e0480u: goto label_4e0480;
        case 0x4e05acu: goto label_4e05ac;
        case 0x4e0610u: goto label_4e0610;
        case 0x4e06c8u: goto label_4e06c8;
        case 0x4e06d0u: goto label_4e06d0;
        case 0x4e06f0u: goto label_4e06f0;
        case 0x4e09d4u: goto label_4e09d4;
        case 0x4e09dcu: goto label_4e09dc;
        case 0x4e09e4u: goto label_4e09e4;
        case 0x4e0b30u: goto label_4e0b30;
        case 0x4e0b58u: goto label_4e0b58;
        case 0x4e0b60u: goto label_4e0b60;
        case 0x4e0b74u: goto label_4e0b74;
        case 0x4e0ba4u: goto label_4e0ba4;
        case 0x4e0bacu: goto label_4e0bac;
        case 0x4e0bb4u: goto label_4e0bb4;
        case 0x4e0bbcu: goto label_4e0bbc;
        case 0x4e0bd0u: goto label_4e0bd0;
        case 0x4e0becu: goto label_4e0bec;
        case 0x4e0bf4u: goto label_4e0bf4;
        default: break;
    }

    ctx->pc = 0x4e0178u;

    // 0x4e0178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e0178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e017c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e017cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e0180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e0180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0184: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e0184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e0188: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e0188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e018c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4e018cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4e0190: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4E0190u;
    SET_GPR_U32(ctx, 31, 0x4E0198u);
    ctx->pc = 0x4E0194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0190u;
    // 0x4e0194: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E0190u, 0x4E0198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0198u;
label_4e0198:
    // 0x4e0198: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e0198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e019c: 0x24721164  addiu       $s2, $v1, 0x1164
    ctx->pc = 0x4e019cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4452));
    // 0x4e01a0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e01a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1164u, _value); } while (0);
    // 0x4e01a4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e01a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e01a8: 0x440004f  bltz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x4E01A8u;
    {
        const bool branch_taken_0x4e01a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E01ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E01A8u;
        // 0x4e01ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e01a8) {
            ctx->pc = 0x4E02E8u;
            goto label_4e02e8;
        }
    }
    ctx->pc = 0x4E01B0u;
    // 0x4e01b0: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E01B0u;
    SET_GPR_U32(ctx, 31, 0x4E01B8u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E01B0u, 0x4E01B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E01B8u;
label_4e01b8:
    // 0x4e01b8: 0x24020434  addiu       $v0, $zero, 0x434
    ctx->pc = 0x4e01b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1076));
    // 0x4e01bc: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x4e01bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x4e01c0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4e01c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e01c4: 0xa603015a  sh          $v1, 0x15A($s0)
    ctx->pc = 0x4e01c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e01c8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e01c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e01cc: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4e01ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e01d0: 0x24e71154  addiu       $a3, $a3, 0x1154
    ctx->pc = 0x4e01d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4436));
    // 0x4e01d4: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4e01d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e01d8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4e01d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4e01dc: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4e01dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e01e0: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4e01e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4e01e4: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x4e01e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4e01e8: 0x2529115c  addiu       $t1, $t1, 0x115C
    ctx->pc = 0x4e01e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4444));
    // 0x4e01ec: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1154u));
    // 0x4e01f0: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4e01f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4e01f4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4e01f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4e01f8: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x4e01f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e01fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e01fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0200: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4e0200u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F115Cu));
    // 0x4e0204: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0208: 0x254a1158  addiu       $t2, $t2, 0x1158
    ctx->pc = 0x4e0208u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4440));
    // 0x4e020c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e020cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e0210: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0214: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e0214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e0218: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x4e0218u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4e021c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4e021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e0220: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x4e0220u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e0224: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4e0224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4e0228: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e022c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4e022cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4e0230: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e0230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e0234: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4e0234u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4e0238: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e0238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e023c: 0x8d620050  lw          $v0, 0x50($t3)
    ctx->pc = 0x4e023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x4e0240: 0x85260000  lh          $a2, 0x0($t1)
    ctx->pc = 0x4e0240u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e0244: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4e0244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4e0248: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0248u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e024c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4e024cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4e0250: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4e0250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4e0254: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4e0254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4e0258: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e0258u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e025c: 0x8d620058  lw          $v0, 0x58($t3)
    ctx->pc = 0x4e025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 88)));
    // 0x4e0260: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e0260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e0264: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4e0264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4e0268: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0268u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e026c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4e026cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4e0270: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x4e0270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x4e0274: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4e0274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4e0278: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4e0278u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4e027c: 0xa6030130  sh          $v1, 0x130($s0)
    ctx->pc = 0x4e027cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e0280: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4e0280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4e0284: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4e0284u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e0288: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4e0288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4e028c: 0xa6030134  sh          $v1, 0x134($s0)
    ctx->pc = 0x4e028cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e0290: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0290u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0294: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4e0294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4e0298: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4e0298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e029c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4e029cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e02a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e02a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e02a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e02a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e02a8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4e02a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4e02ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e02acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e02b0: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x4e02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x4e02b4: 0x85440000  lh          $a0, 0x0($t2)
    ctx->pc = 0x4e02b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e02b8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4e02b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4e02bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e02bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e02c0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4e02c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4e02c4: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4e02c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4e02c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4e02c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4e02cc: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4e02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4e02d0: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x4e02d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e02d4: 0xa60c01b6  sh          $t4, 0x1B6($s0)
    ctx->pc = 0x4e02d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 12));
    // 0x4e02d8: 0xa6040132  sh          $a0, 0x132($s0)
    ctx->pc = 0x4e02d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e02dc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e02dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e02e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e02e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e02e4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e02e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e02e8:
    // 0x4e02e8: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4e02e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x4e02ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e02f0: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4e02f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e02f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E02F4u;
    {
        const bool branch_taken_0x4e02f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E02F4u;
        // 0x4e02f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e02f4) {
            ctx->pc = 0x4E0318u;
            goto label_4e0318;
        }
    }
    ctx->pc = 0x4E02FCu;
    // 0x4e02fc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E02FCu;
    {
        const bool branch_taken_0x4e02fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E0300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E02FCu;
        // 0x4e0300: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e02fc) {
            ctx->pc = 0x4E0338u;
            goto label_4e0338;
        }
    }
    ctx->pc = 0x4E0304u;
    // 0x4e0304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e0304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e0308: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e0308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e030c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4e030cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e0310: 0x3e00008  jr          $ra
    ctx->pc = 0x4E0310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0310u;
        // 0x4e0314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E0318u;
label_4e0318:
    // 0x4e0318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e0318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e031c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e031cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e0320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e0320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e0324: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e0324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e0328: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4e0328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e032c: 0x81380d4  j           func_4E0350
    ctx->pc = 0x4E032Cu;
    ctx->pc = 0x4E0330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E032Cu;
    // 0x4e0330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0350u;
    goto label_4e0350;
    ctx->pc = 0x4E0334u;
    // 0x4e0334: 0x0  nop
    ctx->pc = 0x4e0334u;
    // NOP
label_4e0338:
    // 0x4e0338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e0338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e033c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e033cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e0340: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e0340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e0344: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4e0344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e0348: 0x81381f8  j           func_4E07E0
    ctx->pc = 0x4E0348u;
    ctx->pc = 0x4E034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0348u;
    // 0x4e034c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E07E0u;
    goto label_4e07e0;
    ctx->pc = 0x4E0350u;
label_4e0350:
    // 0x4e0350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e0350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e0354: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e0354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e0358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e0358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e035c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e035cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e0360: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e0360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e0364: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4e0364u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4e0368: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e0368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e036c: 0x24b01148  addiu       $s0, $a1, 0x1148
    ctx->pc = 0x4e036cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4424));
    // 0x4e0370: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e0370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e0374: 0x24541164  addiu       $s4, $v0, 0x1164
    ctx->pc = 0x4e0374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4452));
    // 0x4e0378: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e0378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e037c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4e037cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0380: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e0380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e0384: 0x26b60010  addiu       $s6, $s5, 0x10
    ctx->pc = 0x4e0384u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4e0388: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4e0388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4e038c: 0x26b70018  addiu       $s7, $s5, 0x18
    ctx->pc = 0x4e038cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x4e0390: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4e0390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4e0394: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4e0394u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4e0398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e0398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e039c: 0x27d3114c  addiu       $s3, $fp, 0x114C
    ctx->pc = 0x4e039cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4428));
    // 0x4e03a0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4e03a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4e03a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e03a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e03a8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e03a8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1164u));
    // 0x4e03ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e03acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1148u));
    // 0x4e03b0: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x4e03b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x4e03b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e03b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e03b8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4e03b8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F114Cu));
    // 0x4e03bc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e03bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e03c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e03c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e03c4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e03c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e03c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e03c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e03cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e03ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e03d0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4e03d4: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x4e03d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e03d8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e03d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e03dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e03dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e03e0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e03e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e03e4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e03e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e03e8: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4e03e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4e03ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e03ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e03f0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4e03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e03f4: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4e03f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e03f8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e03f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e03fc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e03fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0400: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4e0400u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4e0404: 0xd23025  or          $a2, $a2, $s2
    ctx->pc = 0x4e0404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    // 0x4e0408: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4e0408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4e040c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e040cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e0410: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4e0410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4e0414: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4e0414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0418: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e0418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e041c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e041cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0420: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4e0420u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4e0424: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x4e0424u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x4e0428: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4e0428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4e042c: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4e042cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4e0430: 0x632818  mult        $a1, $v1, $v1
    ctx->pc = 0x4e0430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4e0434: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4e0434u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e0438: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x4e0438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4e043c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x4e043cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4e0440: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e0440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4e0444: 0xc12a1cc  jal         func_4A8730
    ctx->pc = 0x4E0444u;
    SET_GPR_U32(ctx, 31, 0x4E044Cu);
    ctx->pc = 0x4E0448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0444u;
    // 0x4e0448: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8730u, 0x4E0444u, 0x4E044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E044Cu;
label_4e044c:
    // 0x4e044c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E044Cu;
    SET_GPR_U32(ctx, 31, 0x4E0454u);
    ctx->pc = 0x4E0450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E044Cu;
    // 0x4e0450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E044Cu, 0x4E0454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0454u;
label_4e0454:
    // 0x4e0454: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x4e0454u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0458: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4e0458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e045c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4e045cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4e0460: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4e0460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x4e0464: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4e0464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4e0468: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e046c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e046cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0470: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0474: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e0474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0478: 0xc13e4ca  jal         func_4F9328
    ctx->pc = 0x4E0478u;
    SET_GPR_U32(ctx, 31, 0x4E0480u);
    ctx->pc = 0x4E047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0478u;
    // 0x4e047c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9328u, 0x4E0478u, 0x4E0480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0480u;
label_4e0480:
    // 0x4e0480: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4E0480u;
    {
        const bool branch_taken_0x4e0480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0480) {
            ctx->pc = 0x4E0484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0480u;
            // 0x4e0484: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0488u;
            goto label_4e0488;
        }
    }
    ctx->pc = 0x4E0488u;
label_4e0488:
    // 0x4e0488: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e0488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e048c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e048cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e0490: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4e0490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0494: 0x24e61150  addiu       $a2, $a3, 0x1150
    ctx->pc = 0x4e0494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4432));
    // 0x4e0498: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e0498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e049c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4e049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e04a0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e04a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e04a4: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x4e04a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e04a8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e04a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e04ac: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4e04acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4e04b0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e04b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e04b4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x4e04b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4e04b8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4e04b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4e04bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e04bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e04c0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4e04c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4e04c4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4e04c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4e04c8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e04c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e04cc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4e04d0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4e04d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4e04d4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e04d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e04d8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e04d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e04dc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e04dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e04e0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4e04e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4e04e4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4e04e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e04e8: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x4e04e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x4e04ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e04f0: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4e04f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e04f4: 0xae231154  sw          $v1, 0x1154($s1)
    ctx->pc = 0x4e04f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4436), GPR_U32(ctx, 3));
    // 0x4e04f8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e04fc: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e04fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e0500: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0500u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0504: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e0504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e0508: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e0508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e050c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4e050cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4e0510: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e0510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e0514: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x4e0514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x4e0518: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4e0518u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e051c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e051cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e0520: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0520u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0524: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4e0524u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e0528: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4e0528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4e052c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4e052cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4e0530: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4e0530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4e0534: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e0534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0538: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E0538u;
    {
        const bool branch_taken_0x4e0538 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4E053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0538u;
        // 0x4e053c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0538) {
            ctx->pc = 0x4E0548u;
            goto label_4e0548;
        }
    }
    ctx->pc = 0x4E0540u;
    // 0x4e0540: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4E0540u;
    {
        const bool branch_taken_0x4e0540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0540u;
        // 0x4e0544: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0540) {
            ctx->pc = 0x4E054Cu;
            goto label_4e054c;
        }
    }
    ctx->pc = 0x4E0548u;
label_4e0548:
    // 0x4e0548: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e0548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_4e054c:
    // 0x4e054c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e054cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4e0550: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e0550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e0554: 0x24521148  addiu       $s2, $v0, 0x1148
    ctx->pc = 0x4e0554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4424));
    // 0x4e0558: 0x27d4114c  addiu       $s4, $fp, 0x114C
    ctx->pc = 0x4e0558u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4428));
    // 0x4e055c: 0x96860000  lhu         $a2, 0x0($s4)
    ctx->pc = 0x4e055cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e0560: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4e0560u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4e0564: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e0564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F1148u));
    // 0x4e0568: 0x24e51150  addiu       $a1, $a3, 0x1150
    ctx->pc = 0x4e0568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4432));
    // 0x4e056c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e056cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1148u));
    // 0x4e0570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e0570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0574: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x4e0574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x4e0578: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4e0578u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4e057c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e057cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e0580: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0584: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0588: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4e0588u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4e058c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e058cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e0590: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0594: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e0594u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e0598: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e0598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e059c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4e059cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4e05a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4e05a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4e05a4: 0xc13e4ca  jal         func_4F9328
    ctx->pc = 0x4E05A4u;
    SET_GPR_U32(ctx, 31, 0x4E05ACu);
    ctx->pc = 0x4E05A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E05A4u;
    // 0x4e05a8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9328u, 0x4E05A4u, 0x4E05ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E05ACu;
label_4e05ac:
    // 0x4e05ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4E05ACu;
    {
        const bool branch_taken_0x4e05ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e05ac) {
            ctx->pc = 0x4E05B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E05ACu;
            // 0x4e05b0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E05B4u;
            goto label_4e05b4;
        }
    }
    ctx->pc = 0x4E05B4u;
label_4e05b4:
    // 0x4e05b4: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x4e05b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e05b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e05b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e05bc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e05bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e05c0: 0x26311154  addiu       $s1, $s1, 0x1154
    ctx->pc = 0x4e05c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4436));
    // 0x4e05c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e05c8: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4e05c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4e05cc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4e05ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4e05d0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4e05d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4e05d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e05d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e05d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e05dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e05dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e05e0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4e05e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4e05e4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e05e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e05e8: 0x2610115c  addiu       $s0, $s0, 0x115C
    ctx->pc = 0x4e05e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4444));
    // 0x4e05ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e05ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e05f0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e05f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e05f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e05f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e05f8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e05f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e05fc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4e05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4e0600: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e0600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e0604: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0608: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E0608u;
    SET_GPR_U32(ctx, 31, 0x4E0610u);
    ctx->pc = 0x4E060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0608u;
    // 0x4e060c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E0608u, 0x4E0610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0610u;
label_4e0610:
    // 0x4e0610: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e0610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e0614: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e0614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e0618: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e0618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e061c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e061cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e0620: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4e0620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0624: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4e0624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4e0628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e0628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4e062c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e062cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4e0630: 0xaea20128  sw          $v0, 0x128($s5)
    ctx->pc = 0x4e0630u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 296), GPR_U32(ctx, 2));
    // 0x4e0634: 0x8ca71164  lw          $a3, 0x1164($a1)
    ctx->pc = 0x4e0634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4452)));
    // 0x4e0638: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4e0638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e063c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4e063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e0640: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e0640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e0644: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4e0644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e0648: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4e0648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4e064c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e064cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0650: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0654: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e0654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e0658: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e0658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e065c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4e065cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4e0660: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e0660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e0664: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4e0664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4e0668: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4e0668u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e066c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4e066cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4e0670: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0670u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0674: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e0674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e0678: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e067c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e067cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e0680: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0684: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4e0684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e0688: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x4e0688u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e068c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4e068cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4e0690: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0690u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0694: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4e0694u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4e0698: 0xb32825  or          $a1, $a1, $s3
    ctx->pc = 0x4e0698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 19));
    // 0x4e069c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e069cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e06a0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4e06a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4e06a4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4e06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4e06a8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4e06a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4e06ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e06acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e06b0: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4e06b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4e06b4: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x4e06b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x4e06b8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4e06b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4e06bc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4e06bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4e06c0: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4E06C0u;
    SET_GPR_U32(ctx, 31, 0x4E06C8u);
    ctx->pc = 0x4E06C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E06C0u;
    // 0x4e06c4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4E06C0u, 0x4E06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E06C8u;
label_4e06c8:
    // 0x4e06c8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E06C8u;
    SET_GPR_U32(ctx, 31, 0x4E06D0u);
    ctx->pc = 0x4E06CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E06C8u;
    // 0x4e06cc: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E06C8u, 0x4E06D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E06D0u;
label_4e06d0:
    // 0x4e06d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e06d4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4e06d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4e06d8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4e06d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4e06dc: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4e06dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4e06e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4e06e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e06e4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4e06e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4e06e8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E06E8u;
    SET_GPR_U32(ctx, 31, 0x4E06F0u);
    ctx->pc = 0x4E06ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E06E8u;
    // 0x4e06ec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E06E8u, 0x4E06F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E06F0u;
label_4e06f0:
    // 0x4e06f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e06f4: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x4e06f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e06f8: 0x26a901bc  addiu       $t1, $s5, 0x1BC
    ctx->pc = 0x4e06f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 444));
    // 0x4e06fc: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4e06fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4e0700: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e0700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e0704: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e0704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4e0708: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x4e0708u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e070c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e070cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e0710: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0714: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4e0714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0718: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e0718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e071c: 0x86a2015a  lh          $v0, 0x15A($s5)
    ctx->pc = 0x4e071cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 346)));
    // 0x4e0720: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x4e0720u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e0724: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e0724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e0728: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e0728u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e072c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e072cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0730: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e0730u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e0734: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e0734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e0738: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e073c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4e073cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e0740: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e0740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e0744: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4e0744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e0748: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e0748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e074c: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4e074cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4e0750: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e0750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e0754: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0758: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e0758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e075c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e075cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0760: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e0760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e0764: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4e0764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4e0768: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4e0768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4e076c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e076cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e0770: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0774: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e0774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e0778: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e0778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e077c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e077cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e0780: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x4e0780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4e0784: 0x70a22818  mult1       $a1, $a1, $v0
    ctx->pc = 0x4e0784u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4e0788: 0x24c80007  addiu       $t0, $a2, 0x7
    ctx->pc = 0x4e0788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x4e078c: 0x28c70000  slti        $a3, $a2, 0x0
    ctx->pc = 0x4e078cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4e0790: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x4e0790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x4e0794: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x4e0794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4e0798: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e0798u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x4e079c: 0x107300b  movn        $a2, $t0, $a3
    ctx->pc = 0x4e079cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x4e07a0: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x4e07a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x4e07a4: 0x630c3  sra         $a2, $a2, 3
    ctx->pc = 0x4e07a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
    // 0x4e07a8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4e07a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4e07ac: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4e07acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4e07b0: 0xaea50124  sw          $a1, 0x124($s5)
    ctx->pc = 0x4e07b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 5));
    // 0x4e07b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e07b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e07b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e07bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e07bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e07c0: 0xaea3012c  sw          $v1, 0x12C($s5)
    ctx->pc = 0x4e07c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 3));
    // 0x4e07c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e07c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e07c8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4e07c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e07cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e07d0: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4e07d0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e07d4: 0x81381f8  j           func_4E07E0
    ctx->pc = 0x4E07D4u;
    ctx->pc = 0x4E07D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E07D4u;
    // 0x4e07d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E07E0u;
    goto label_4e07e0;
    ctx->pc = 0x4E07DCu;
    // 0x4e07dc: 0x0  nop
    ctx->pc = 0x4e07dcu;
    // NOP
label_4e07e0:
    // 0x4e07e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e07e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4e07e4: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x4e07e4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x4e07e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4e07e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4e07ec: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4e07ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4e07f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4e07f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4e07f4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4e07f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4e07f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4e07f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4e07fc: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4e07fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4e0800: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4e0800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4e0804: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4e0804u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4e0808: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4e0808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4e080c: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4e080cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4e0810: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4e0810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4e0814: 0x26731148  addiu       $s3, $s3, 0x1148
    ctx->pc = 0x4e0814u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4424));
    // 0x4e0818: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4e0818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4e081c: 0x26311154  addiu       $s1, $s1, 0x1154
    ctx->pc = 0x4e081cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4436));
    // 0x4e0820: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4e0820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4e0824: 0x2610115c  addiu       $s0, $s0, 0x115C
    ctx->pc = 0x4e0824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4444));
    // 0x4e0828: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4e0828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4e082c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4e082cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0830: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4e0830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4e0834: 0x27cc0128  addiu       $t4, $fp, 0x128
    ctx->pc = 0x4e0834u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), 296));
    // 0x4e0838: 0x27d70130  addiu       $s7, $fp, 0x130
    ctx->pc = 0x4e0838u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 304));
    // 0x4e083c: 0x26941164  addiu       $s4, $s4, 0x1164
    ctx->pc = 0x4e083cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4452));
    // 0x4e0840: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4e0840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e0844: 0x27d60134  addiu       $s6, $fp, 0x134
    ctx->pc = 0x4e0844u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 308));
    // 0x4e0848: 0x27cb0010  addiu       $t3, $fp, 0x10
    ctx->pc = 0x4e0848u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x4e084c: 0x27c90018  addiu       $t1, $fp, 0x18
    ctx->pc = 0x4e084cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x4e0850: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x4e0850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x4e0854: 0x26521158  addiu       $s2, $s2, 0x1158
    ctx->pc = 0x4e0854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4440));
    // 0x4e0858: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e0858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1148u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1148u, _value); } while (0);
    // 0x4e085c: 0x27d50132  addiu       $s5, $fp, 0x132
    ctx->pc = 0x4e085cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 306));
    // 0x4e0860: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4e0860u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4e0864: 0x27c80014  addiu       $t0, $fp, 0x14
    ctx->pc = 0x4e0864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x4e0868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e0868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e086c: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4e086cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4e0870: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e0870u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1154u));
    // 0x4e0874: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4e0874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4e0878: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x4e0878u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x7F1164u));
    // 0x4e087c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e087cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0880: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4e0880u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F115Cu));
    // 0x4e0884: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0888: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e0888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e088c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e088cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0890: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e0890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e0894: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4e0894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e0898: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4e0898u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e089c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4e089cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4e08a0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e08a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e08a4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4e08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4e08a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e08a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e08ac: 0x8d420050  lw          $v0, 0x50($t2)
    ctx->pc = 0x4e08acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x4e08b0: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x4e08b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e08b4: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4e08b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4e08b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e08b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e08bc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4e08bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4e08c0: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x4e08c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x4e08c4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4e08c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4e08c8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e08c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e08cc: 0x8d420058  lw          $v0, 0x58($t2)
    ctx->pc = 0x4e08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x4e08d0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4e08d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e08d4: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4e08d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4e08d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e08d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e08dc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e08dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e08e0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4e08e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4e08e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e08e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e08e8: 0xed3825  or          $a3, $a3, $t5
    ctx->pc = 0x4e08e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x4e08ec: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4e08ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4e08f0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4e08f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4e08f4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4e08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4e08f8: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4e08f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4e08fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e08fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e0900: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4e0900u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4e0904: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4e0904u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0908: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e0908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e090c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e090cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e0910: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4e0910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4e0914: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e0914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e0918: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e0918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e091c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4e091cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4e0920: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4e0920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e0924: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4e0924u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e0928: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e0928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e092c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e092cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e0930: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4e0930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4e0934: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e0934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e0938: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4e0938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4e093c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e093cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e0940: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e0940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x4e0944: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4e0944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e0948: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4e0948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4e094c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e094cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0950: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e0950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e0954: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x4e0954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x4e0958: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4e0958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4e095c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4e095cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4e0960: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e0960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e0964: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e0964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0968: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e0968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e096c: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x4e096cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x4e0970: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e0970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e0974: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0978: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4e0978u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4e097c: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4e097cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4e0980: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4e0980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4e0984: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e0984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0988: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e0988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e098c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4e098cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e0990: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4e0990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4e0994: 0x8fc20124  lw          $v0, 0x124($fp)
    ctx->pc = 0x4e0994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
    // 0x4e0998: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4e0998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4e099c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4e099cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4e09a0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4e09a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e09a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e09a8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e09a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e09ac: 0x8fc2012c  lw          $v0, 0x12C($fp)
    ctx->pc = 0x4e09acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 300)));
    // 0x4e09b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4e09b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4e09b4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4e09b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4e09b8: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4e09b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4e09bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e09c0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4e09c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4e09c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e09c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e09c8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4e09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4e09cc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E09CCu;
    SET_GPR_U32(ctx, 31, 0x4E09D4u);
    ctx->pc = 0x4E09D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E09CCu;
    // 0x4e09d0: 0x7fad0000  sq          $t5, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E09CCu, 0x4E09D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E09D4u;
label_4e09d4:
    // 0x4e09d4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E09D4u;
    SET_GPR_U32(ctx, 31, 0x4E09DCu);
    ctx->pc = 0x4E09D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E09D4u;
    // 0x4e09d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E09D4u, 0x4E09DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E09DCu;
label_4e09dc:
    // 0x4e09dc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E09DCu;
    SET_GPR_U32(ctx, 31, 0x4E09E4u);
    ctx->pc = 0x4E09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E09DCu;
    // 0x4e09e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E09DCu, 0x4E09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E09E4u;
label_4e09e4:
    // 0x4e09e4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4e09e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e09e8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e09e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4e09ec: 0x7bad0000  lq          $t5, 0x0($sp)
    ctx->pc = 0x4e09ecu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e09f0: 0x24e71150  addiu       $a3, $a3, 0x1150
    ctx->pc = 0x4e09f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4432));
    // 0x4e09f4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e09f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e09f8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4e09f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1150u));
    // 0x4e09fc: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x4e09fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
    // 0x4e0a00: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4e0a00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e0a04: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4e0a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4e0a08: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x4e0a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x4e0a0c: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4e0a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e0a10: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4e0a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4e0a14: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4e0a14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4e0a18: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4e0a18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4e0a1c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e0a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e0a20: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e0a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e0a24: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4e0a24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4e0a28: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x4e0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x4e0a2c: 0x2508114c  addiu       $t0, $t0, 0x114C
    ctx->pc = 0x4e0a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4428));
    // 0x4e0a30: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4e0a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e0a34: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4e0a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4e0a38: 0x84e60000  lh          $a2, 0x0($a3)
    ctx->pc = 0x4e0a38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e0a3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0a3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0a40: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4e0a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e0a44: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x4e0a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x4e0a48: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4e0a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4e0a4c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4e0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4e0a50: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x4e0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x4e0a54: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4e0a54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e0a58: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4e0a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4e0a5c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0a5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0a60: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4e0a60u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4e0a64: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x4e0a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x4e0a68: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4e0a68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4e0a6c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4e0a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4e0a70: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x4e0a70u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e0a74: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4e0a74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e0a78: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x4e0a78u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e0a7c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e0a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0a80: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e0a80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e0a84: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x4e0a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
    // 0x4e0a88: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e0a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e0a8c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4e0a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4e0a90: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4e0a90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4e0a94: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e0a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e0a98: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x4e0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x4e0a9c: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4e0a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0aa0: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4e0aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4e0aa4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e0aa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e0aa8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4e0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e0aac: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x4e0aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x4e0ab0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4e0ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4e0ab4: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4e0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4e0ab8: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4e0ab8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0abc: 0xa6a30000  sh          $v1, 0x0($s5)
    ctx->pc = 0x4e0abcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e0ac0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e0ac4: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4e0ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e0ac8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e0ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e0acc: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4e0accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4e0ad0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e0ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4e0ad4: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4e0ad4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e0ad8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x4e0ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4e0adc: 0x483000e  bgezl       $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E0ADCu;
    {
        const bool branch_taken_0x4e0adc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x4e0adc) {
            ctx->pc = 0x4E0AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0ADCu;
            // 0x4e0ae0: 0x27c30118  addiu       $v1, $fp, 0x118 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0B18u;
            goto label_4e0b18;
        }
    }
    ctx->pc = 0x4E0AE4u;
    // 0x4e0ae4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4e0ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0ae8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4e0ae8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e0aec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4e0aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e0af0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4e0af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e0af4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4e0af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e0af8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4e0af8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e0afc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4e0afcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e0b00: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4e0b00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e0b04: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4e0b04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e0b08: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4e0b08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e0b0c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4e0b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4e0b10: 0x813830a  j           func_4E0C28
    ctx->pc = 0x4E0B10u;
    ctx->pc = 0x4E0B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0B10u;
    // 0x4e0b14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0C28u;
    goto label_4e0c28;
    ctx->pc = 0x4E0B18u;
label_4e0b18:
    // 0x4e0b18: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4e0b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0b1c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e0b1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e0b20: 0x24420900  addiu       $v0, $v0, 0x900
    ctx->pc = 0x4e0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2304));
    // 0x4e0b24: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e0b24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e0b28: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4E0B28u;
    SET_GPR_U32(ctx, 31, 0x4E0B30u);
    ctx->pc = 0x4E0B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0B28u;
    // 0x4e0b2c: 0x7fad0000  sq          $t5, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4E0B28u, 0x4E0B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0B30u;
label_4e0b30:
    // 0x4e0b30: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e0b34: 0x24631160  addiu       $v1, $v1, 0x1160
    ctx->pc = 0x4e0b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4448));
    // 0x4e0b38: 0x7bad0000  lq          $t5, 0x0($sp)
    ctx->pc = 0x4e0b38u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e0b3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1160u));
    // 0x4e0b40: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4e0b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0b44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e0b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e0b48: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4e0b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4e0b4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e0b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4e0b50: 0xc12b280  jal         func_4ACA00
    ctx->pc = 0x4E0B50u;
    SET_GPR_U32(ctx, 31, 0x4E0B58u);
    ctx->pc = 0x4E0B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0B50u;
    // 0x4e0b54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACA00u, 0x4E0B50u, 0x4E0B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0B58u;
label_4e0b58:
    // 0x4e0b58: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4E0B58u;
    SET_GPR_U32(ctx, 31, 0x4E0B60u);
    ctx->pc = 0x4E0B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0B58u;
    // 0x4e0b5c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4E0B58u, 0x4E0B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0B60u;
label_4e0b60:
    // 0x4e0b60: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4E0B60u;
    {
        const bool branch_taken_0x4e0b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0B60u;
        // 0x4e0b64: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0b60) {
            ctx->pc = 0x4E0BF8u;
            goto label_4e0bf8;
        }
    }
    ctx->pc = 0x4E0B68u;
    // 0x4e0b68: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4e0b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0b6c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4E0B6Cu;
    SET_GPR_U32(ctx, 31, 0x4E0B74u);
    ctx->pc = 0x4E0B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0B6Cu;
    // 0x4e0b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4E0B6Cu, 0x4E0B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0B74u;
label_4e0b74:
    // 0x4e0b74: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4e0b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e0b78: 0x14500013  bne         $v0, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4E0B78u;
    {
        const bool branch_taken_0x4e0b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4E0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0B78u;
        // 0x4e0b7c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0b78) {
            ctx->pc = 0x4E0BC8u;
            goto label_4e0bc8;
        }
    }
    ctx->pc = 0x4E0B80u;
    // 0x4e0b80: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4e0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4e0b84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4e0b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4e0b88: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4e0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4e0b8c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4e0b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4e0b90: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x4e0b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x4e0b94: 0xa44623c4  sh          $a2, 0x23C4($v0)
    ctx->pc = 0x4e0b94u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4e0b98: 0xa443232e  sh          $v1, 0x232E($v0)
    ctx->pc = 0x4e0b98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9AEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9AEu, _value); } while (0);
    // 0x4e0b9c: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4E0B9Cu;
    SET_GPR_U32(ctx, 31, 0x4E0BA4u);
    ctx->pc = 0x4E0BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0B9Cu;
    // 0x4e0ba0: 0xa445232c  sh          $a1, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4E0B9Cu, 0x4E0BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0BA4u;
label_4e0ba4:
    // 0x4e0ba4: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4E0BA4u;
    SET_GPR_U32(ctx, 31, 0x4E0BACu);
    ctx->pc = 0x4E0BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0BA4u;
    // 0x4e0ba8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4E0BA4u, 0x4E0BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0BACu;
label_4e0bac:
    // 0x4e0bac: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4E0BACu;
    SET_GPR_U32(ctx, 31, 0x4E0BB4u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4E0BACu, 0x4E0BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0BB4u;
label_4e0bb4:
    // 0x4e0bb4: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4E0BB4u;
    SET_GPR_U32(ctx, 31, 0x4E0BBCu);
    ctx->pc = 0x4E0BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0BB4u;
    // 0x4e0bb8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4E0BB4u, 0x4E0BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0BBCu;
label_4e0bbc:
    // 0x4e0bbc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4E0BBCu;
    {
        const bool branch_taken_0x4e0bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0BBCu;
        // 0x4e0bc0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0bbc) {
            ctx->pc = 0x4E0BF8u;
            goto label_4e0bf8;
        }
    }
    ctx->pc = 0x4E0BC4u;
    // 0x4e0bc4: 0x0  nop
    ctx->pc = 0x4e0bc4u;
    // NOP
label_4e0bc8:
    // 0x4e0bc8: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4E0BC8u;
    SET_GPR_U32(ctx, 31, 0x4E0BD0u);
    ctx->pc = 0x4E0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0BC8u;
    // 0x4e0bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4E0BC8u, 0x4E0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0BD0u;
label_4e0bd0:
    // 0x4e0bd0: 0x54500009  bnel        $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4E0BD0u;
    {
        const bool branch_taken_0x4e0bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4e0bd0) {
            ctx->pc = 0x4E0BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0BD0u;
            // 0x4e0bd4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0BF8u;
            goto label_4e0bf8;
        }
    }
    ctx->pc = 0x4E0BD8u;
    // 0x4e0bd8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e0bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4e0bdc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x4e0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x4e0be0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4e0be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0be4: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4E0BE4u;
    SET_GPR_U32(ctx, 31, 0x4E0BECu);
    ctx->pc = 0x4E0BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0BE4u;
    // 0x4e0be8: 0xa462f9ae  sh          $v0, -0x652($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965678), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4E0BE4u, 0x4E0BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0BECu;
label_4e0bec:
    // 0x4e0bec: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4E0BECu;
    SET_GPR_U32(ctx, 31, 0x4E0BF4u);
    ctx->pc = 0x4E0BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0BECu;
    // 0x4e0bf0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4E0BECu, 0x4E0BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0BF4u;
label_4e0bf4:
    // 0x4e0bf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4e0bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0bf8:
    // 0x4e0bf8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4e0bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e0bfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4e0bfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e0c00: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4e0c00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e0c04: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4e0c04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e0c08: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4e0c08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e0c0c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4e0c0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e0c10: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4e0c10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e0c14: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4e0c14u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e0c18: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4e0c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4e0c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E0C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0C1Cu;
        // 0x4e0c20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E0C24u;
    // 0x4e0c24: 0x0  nop
    ctx->pc = 0x4e0c24u;
    // NOP
label_4e0c28:
    // 0x4e0c28: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e0c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e0c2c: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x4e0c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4e0c30: 0x24a51148  addiu       $a1, $a1, 0x1148
    ctx->pc = 0x4e0c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4424));
    // 0x4e0c34: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0c38: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e0c38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F1148u));
    // 0x4e0c3c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e0c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e0c40: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4e0c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4e0c44: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x4e0c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4e0c48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e0c4c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x4e0c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e0c50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e0c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e0c54: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x4e0c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x4e0c58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e0c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e0c5c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4e0c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4e0c60: 0xa4870008  sh          $a3, 0x8($a0)
    ctx->pc = 0x4e0c60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x4e0c64: 0xa489000e  sh          $t1, 0xE($a0)
    ctx->pc = 0x4e0c64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x4e0c68: 0xa48601be  sh          $a2, 0x1BE($a0)
    ctx->pc = 0x4e0c68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 446), (uint16_t)GPR_U32(ctx, 6));
    // 0x4e0c6c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4e0c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4e0c70: 0xa4800168  sh          $zero, 0x168($a0)
    ctx->pc = 0x4e0c70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e0c74: 0xa48001b4  sh          $zero, 0x1B4($a0)
    ctx->pc = 0x4e0c74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 436), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e0c78: 0xa48001b6  sh          $zero, 0x1B6($a0)
    ctx->pc = 0x4e0c78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e0c7c: 0xa480015e  sh          $zero, 0x15E($a0)
    ctx->pc = 0x4e0c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e0c80: 0xa4800160  sh          $zero, 0x160($a0)
    ctx->pc = 0x4e0c80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e0c84: 0xa4800162  sh          $zero, 0x162($a0)
    ctx->pc = 0x4e0c84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e0c88: 0xa4800164  sh          $zero, 0x164($a0)
    ctx->pc = 0x4e0c88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e0c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E0C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0C8Cu;
        // 0x4e0c90: 0xa4800166  sh          $zero, 0x166($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 358), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E0C94u;
    // 0x4e0c94: 0x0  nop
    ctx->pc = 0x4e0c94u;
    // NOP
    ctx->pc = 0x4e0c98u;
}
