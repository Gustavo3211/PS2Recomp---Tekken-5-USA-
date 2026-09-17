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

// Function: sub_004D7670
// Address: 0x4d7670 - 0x4d7870
void sub_004D7670_0x4d7670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7670_0x4d7670");
#endif

    switch (ctx->pc) {
        case 0x4d7694u: goto label_4d7694;
        default: break;
    }

    ctx->pc = 0x4d7670u;

    // 0x4d7670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d7670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d7674: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d7674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d7678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d7678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d767c: 0x24501090  addiu       $s0, $v0, 0x1090
    ctx->pc = 0x4d767cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4240));
    // 0x4d7680: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d7680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d7684: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4d7684u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F1090u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1090u, _value); } while (0);
    // 0x4d7688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d7688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d768c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4D768Cu;
    SET_GPR_U32(ctx, 31, 0x4D7694u);
    ctx->pc = 0x4D7690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D768Cu;
    // 0x4d7690: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4D768Cu, 0x4D7694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7694u;
label_4d7694:
    // 0x4d7694: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4d7694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7698: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d7698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d769c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d769cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4d76a0: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d76a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d76a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d76a8: 0x24e71094  addiu       $a3, $a3, 0x1094
    ctx->pc = 0x4d76a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4244));
    // 0x4d76ac: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d76acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d76b0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4d76b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d76b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d76b8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4d76b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4d76bc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4d76bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x4d76c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d76c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d76c4: 0x84847b30  lh          $a0, 0x7B30($a0)
    ctx->pc = 0x4d76c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 31536)));
    // 0x4d76c8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d76cc: 0x24c61098  addiu       $a2, $a2, 0x1098
    ctx->pc = 0x4d76ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4248));
    // 0x4d76d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d76d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d76d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4d76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d76d8: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4d76d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4d76dc: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4d76dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4d76e0: 0xac4910a8  sw          $t1, 0x10A8($v0)
    ctx->pc = 0x4d76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4264), GPR_U32(ctx, 9));
    // 0x4d76e4: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4d76e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4d76e8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4d76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4d76ec: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x4d76ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4d76f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d76f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d76f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4d76f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d76f8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d76f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4d76fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d76fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d7700: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d7700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d7704: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4d7704u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d7708: 0x84e70000  lh          $a3, 0x0($a3)
    ctx->pc = 0x4d7708u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d770c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d770cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d7710: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d7710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4d7714: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d7714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d7718: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d7718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4d771c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4d771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4d7720: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x4d7720u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d7724: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4d7724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4d7728: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d7728u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d772c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4d7730: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4d7730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4d7734: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4d7734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4d7738: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d7738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d773c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4d773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d7740: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4d7740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d7744: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4d7744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4d7748: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d7748u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d774c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4d774cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d7750: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4d7750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4d7754: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d7754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4d7758: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4d7758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4d775c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d775cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d7760: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d7760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d7764: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4d7764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4d7768: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d7768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4d776c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4d776cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4d7770: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4d7770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4d7774: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d7774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d7778: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4d7778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4d777c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x4D777Cu;
    {
        const bool branch_taken_0x4d777c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D777Cu;
        // 0x4d7780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d777c) {
            ctx->pc = 0x4D7858u;
            goto label_4d7858;
        }
    }
    ctx->pc = 0x4D7784u;
    // 0x4d7784: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4d7784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4d7788: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d7788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d778c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4d778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4d7790: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d7790u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d7794: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d7794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4d7798: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4d7798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4d779c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4d779cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4d77a0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d77a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d77a4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4d77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4d77a8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4d77a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d77ac: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4d77acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4d77b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d77b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d77b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4d77b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d77b8: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4d77b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4d77bc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d77bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4d77c0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4d77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4d77c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d77c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d77c8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d77c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d77cc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4d77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4d77d0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d77d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4d77d4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4d77d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4d77d8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4d77d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4d77dc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d77dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d77e0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4d77e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4d77e4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4D77E4u;
    {
        const bool branch_taken_0x4d77e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D77E4u;
        // 0x4d77e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d77e4) {
            ctx->pc = 0x4D7858u;
            goto label_4d7858;
        }
    }
    ctx->pc = 0x4D77ECu;
    // 0x4d77ec: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x4d77ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4d77f0: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x4d77f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d77f4: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4d77f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4d77f8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4d77f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4d77fc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4d77fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4d7800: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4d7800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4d7804: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4d7804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4d7808: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d7808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d780c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x4d780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x4d7810: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4d7810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d7814: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4d7814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4d7818: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4d7818u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4d781c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x4d781cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4d7820: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4d7820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4d7824: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4d7824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4d7828: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4d7828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4d782c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d782cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d7830: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4d7830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d7834: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4d7834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4d7838: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4d7838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4d783c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4d783cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4d7840: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4d7840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4d7844: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4d7844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d7848: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x4d7848u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4d784c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D784Cu;
    {
        const bool branch_taken_0x4d784c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D784Cu;
        // 0x4d7850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d784c) {
            ctx->pc = 0x4D7858u;
            goto label_4d7858;
        }
    }
    ctx->pc = 0x4D7854u;
    // 0x4d7854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4d7854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d7858:
    // 0x4d7858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d785c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d785cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d7860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d7860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7864: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7864u;
        // 0x4d7868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D786Cu;
    // 0x4d786c: 0x0  nop
    ctx->pc = 0x4d786cu;
    // NOP
    ctx->pc = 0x4d7870u;
}
