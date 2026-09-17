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

// Function: sub_0031F0C0
// Address: 0x31f0c0 - 0x31f328
void sub_0031F0C0_0x31f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F0C0_0x31f0c0");
#endif

    switch (ctx->pc) {
        case 0x31f0dcu: goto label_31f0dc;
        default: break;
    }

    ctx->pc = 0x31f0c0u;

    // 0x31f0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31f0c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31f0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31f0c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31f0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31f0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31f0d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31f0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31f0d4: 0xc0c7c16  jal         func_31F058
    ctx->pc = 0x31F0D4u;
    SET_GPR_U32(ctx, 31, 0x31F0DCu);
    ctx->pc = 0x31F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F0D4u;
    // 0x31f0d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F058u, 0x31F0D4u, 0x31F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F0DCu;
label_31f0dc:
    // 0x31f0dc: 0x8e220418  lw          $v0, 0x418($s1)
    ctx->pc = 0x31f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x31f0e0: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x31F0E0u;
    {
        const bool branch_taken_0x31f0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0E0u;
        // 0x31f0e4: 0x3c0a0040  lui         $t2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0e0) {
            ctx->pc = 0x31F208u;
            goto label_31f208;
        }
    }
    ctx->pc = 0x31F0E8u;
    // 0x31f0e8: 0x34049000  ori         $a0, $zero, 0x9000
    ctx->pc = 0x31f0e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x31f0ec: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x31f0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x31f0f0: 0x25420400  addiu       $v0, $t2, 0x400
    ctx->pc = 0x31f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1024));
    // 0x31f0f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x31f0f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f0f8: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x31f0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x31f0fc: 0x24c7ffe0  addiu       $a3, $a2, -0x20
    ctx->pc = 0x31f0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x31f100: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x31f100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x31f104: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x31f104u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x31f108: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x31f108u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x31f10c: 0x2448003c  addiu       $t0, $v0, 0x3C
    ctx->pc = 0x31f10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x31f110: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31f110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x31f114: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31f114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31f118: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x31f118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31f11c: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x31f11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x31f120: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x31f120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x31f124: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F124u;
    {
        const bool branch_taken_0x31f124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x31F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F124u;
        // 0x31f128: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f124) {
            ctx->pc = 0x31F140u;
            goto label_31f140;
        }
    }
    ctx->pc = 0x31F12Cu;
    // 0x31f12c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f130: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f134: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31F134u;
    {
        const bool branch_taken_0x31f134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F134u;
        // 0x31f138: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f134) {
            ctx->pc = 0x31F150u;
            goto label_31f150;
        }
    }
    ctx->pc = 0x31F13Cu;
    // 0x31f13c: 0x0  nop
    ctx->pc = 0x31f13cu;
    // NOP
label_31f140:
    // 0x31f140: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31f140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31f144: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f148: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f14c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x31f14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_31f150:
    // 0x31f150: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f154: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31f154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f158: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x31f158u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x31f15c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31f160: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x31f160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x31f164: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31f168: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F168u;
    {
        const bool branch_taken_0x31f168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31f168) {
            ctx->pc = 0x31F16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F168u;
            // 0x31f16c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F180u;
            goto label_31f180;
        }
    }
    ctx->pc = 0x31F170u;
    // 0x31f170: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f174: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31F178u;
    {
        const bool branch_taken_0x31f178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F178u;
        // 0x31f17c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f178) {
            ctx->pc = 0x31F18Cu;
            goto label_31f18c;
        }
    }
    ctx->pc = 0x31F180u;
label_31f180:
    // 0x31f180: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f184: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f188: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31f188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31f18c:
    // 0x31f18c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f190: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31f190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f194: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f198: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31f198u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31f19c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x31f19cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x31f1a0: 0x3c090044  lui         $t1, 0x44
    ctx->pc = 0x31f1a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)68 << 16));
    // 0x31f1a4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31f1a8: 0x252408c0  addiu       $a0, $t1, 0x8C0
    ctx->pc = 0x31f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2240));
    // 0x31f1ac: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31f1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31f1b0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31F1B0u;
    {
        const bool branch_taken_0x31f1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F1B0u;
        // 0x31f1b4: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1b0) {
            ctx->pc = 0x31F1D0u;
            goto label_31f1d0;
        }
    }
    ctx->pc = 0x31F1B8u;
    // 0x31f1b8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f1bc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31f1c0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31f1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31f1c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31F1C4u;
    {
        const bool branch_taken_0x31f1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F1C4u;
        // 0x31f1c8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1c4) {
            ctx->pc = 0x31F1E4u;
            goto label_31f1e4;
        }
    }
    ctx->pc = 0x31F1CCu;
    // 0x31f1cc: 0x0  nop
    ctx->pc = 0x31f1ccu;
    // NOP
label_31f1d0:
    // 0x31f1d0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31f1d4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31f1d8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31f1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31f1dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f1e0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31f1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31f1e4:
    // 0x31f1e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f1e8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31f1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f1ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f1ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f1f0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31f1f0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31f1f4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x31f1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x31f1f8: 0xae200418  sw          $zero, 0x418($s1)
    ctx->pc = 0x31f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 0));
    // 0x31f1fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31F1FCu;
    {
        const bool branch_taken_0x31f1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F1FCu;
        // 0x31f200: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1fc) {
            ctx->pc = 0x31F20Cu;
            goto label_31f20c;
        }
    }
    ctx->pc = 0x31F204u;
    // 0x31f204: 0x0  nop
    ctx->pc = 0x31f204u;
    // NOP
label_31f208:
    // 0x31f208: 0x3c090044  lui         $t1, 0x44
    ctx->pc = 0x31f208u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)68 << 16));
label_31f20c:
    // 0x31f20c: 0x25420400  addiu       $v0, $t2, 0x400
    ctx->pc = 0x31f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1024));
    // 0x31f210: 0x34049000  ori         $a0, $zero, 0x9000
    ctx->pc = 0x31f210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x31f214: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x31f214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x31f218: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x31f218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x31f21c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x31f21cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f220: 0x24c7ffe0  addiu       $a3, $a2, -0x20
    ctx->pc = 0x31f220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x31f224: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x31f224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x31f228: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x31f228u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x31f22c: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x31f22cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x31f230: 0x2448003c  addiu       $t0, $v0, 0x3C
    ctx->pc = 0x31f230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x31f234: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31f234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x31f238: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31f238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31f23c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x31f23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31f240: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x31f240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x31f244: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x31f244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x31f248: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F248u;
    {
        const bool branch_taken_0x31f248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x31F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F248u;
        // 0x31f24c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f248) {
            ctx->pc = 0x31F260u;
            goto label_31f260;
        }
    }
    ctx->pc = 0x31F250u;
    // 0x31f250: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f254: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f258: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31F258u;
    {
        const bool branch_taken_0x31f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F258u;
        // 0x31f25c: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f258) {
            ctx->pc = 0x31F270u;
            goto label_31f270;
        }
    }
    ctx->pc = 0x31F260u;
label_31f260:
    // 0x31f260: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31f260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31f264: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f268: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f26c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x31f26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_31f270:
    // 0x31f270: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f274: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31f274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f278: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x31f278u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x31f27c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31f280: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x31f280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x31f284: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31f284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31f288: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F288u;
    {
        const bool branch_taken_0x31f288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31f288) {
            ctx->pc = 0x31F28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F288u;
            // 0x31f28c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F2A0u;
            goto label_31f2a0;
        }
    }
    ctx->pc = 0x31F290u;
    // 0x31f290: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f294: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31F298u;
    {
        const bool branch_taken_0x31f298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F298u;
        // 0x31f29c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f298) {
            ctx->pc = 0x31F2ACu;
            goto label_31f2ac;
        }
    }
    ctx->pc = 0x31F2A0u;
label_31f2a0:
    // 0x31f2a0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f2a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f2a8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31f2ac:
    // 0x31f2ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f2b0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31f2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f2b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f2b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2b8: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31f2b8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31f2bc: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x31f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x31f2c0: 0x252408c0  addiu       $a0, $t1, 0x8C0
    ctx->pc = 0x31f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2240));
    // 0x31f2c4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31f2c8: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x31f2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31f2cc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F2CCu;
    {
        const bool branch_taken_0x31f2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2CCu;
        // 0x31f2d0: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2cc) {
            ctx->pc = 0x31F2E8u;
            goto label_31f2e8;
        }
    }
    ctx->pc = 0x31F2D4u;
    // 0x31f2d4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f2d8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31f2dc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31f2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31f2e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31F2E0u;
    {
        const bool branch_taken_0x31f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2E0u;
        // 0x31f2e4: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2e0) {
            ctx->pc = 0x31F2FCu;
            goto label_31f2fc;
        }
    }
    ctx->pc = 0x31F2E8u;
label_31f2e8:
    // 0x31f2e8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31f2ec: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31f2f0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31f2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31f2f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f2f8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31f2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31f2fc:
    // 0x31f2fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f300: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31f300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f308: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31f308u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31f30c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x31f30cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x31f310: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x31f310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x31f314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31f314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31f318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31f31c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31f31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f320: 0x3e00008  jr          $ra
    ctx->pc = 0x31F320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F320u;
        // 0x31f324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F328u;
}
