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

// Function: sub_0032A030
// Address: 0x32a030 - 0x32a138
void sub_0032A030_0x32a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A030_0x32a030");
#endif

    switch (ctx->pc) {
        case 0x32a030u: goto label_32a030;
        case 0x32a034u: goto label_32a034;
        case 0x32a038u: goto label_32a038;
        case 0x32a03cu: goto label_32a03c;
        case 0x32a040u: goto label_32a040;
        case 0x32a044u: goto label_32a044;
        case 0x32a048u: goto label_32a048;
        case 0x32a04cu: goto label_32a04c;
        case 0x32a050u: goto label_32a050;
        case 0x32a054u: goto label_32a054;
        case 0x32a058u: goto label_32a058;
        case 0x32a05cu: goto label_32a05c;
        case 0x32a060u: goto label_32a060;
        case 0x32a064u: goto label_32a064;
        case 0x32a068u: goto label_32a068;
        case 0x32a06cu: goto label_32a06c;
        case 0x32a070u: goto label_32a070;
        case 0x32a074u: goto label_32a074;
        case 0x32a078u: goto label_32a078;
        case 0x32a07cu: goto label_32a07c;
        case 0x32a080u: goto label_32a080;
        case 0x32a084u: goto label_32a084;
        case 0x32a088u: goto label_32a088;
        case 0x32a08cu: goto label_32a08c;
        case 0x32a090u: goto label_32a090;
        case 0x32a094u: goto label_32a094;
        case 0x32a098u: goto label_32a098;
        case 0x32a09cu: goto label_32a09c;
        case 0x32a0a0u: goto label_32a0a0;
        case 0x32a0a4u: goto label_32a0a4;
        case 0x32a0a8u: goto label_32a0a8;
        case 0x32a0acu: goto label_32a0ac;
        case 0x32a0b0u: goto label_32a0b0;
        case 0x32a0b4u: goto label_32a0b4;
        case 0x32a0b8u: goto label_32a0b8;
        case 0x32a0bcu: goto label_32a0bc;
        case 0x32a0c0u: goto label_32a0c0;
        case 0x32a0c4u: goto label_32a0c4;
        case 0x32a0c8u: goto label_32a0c8;
        case 0x32a0ccu: goto label_32a0cc;
        case 0x32a0d0u: goto label_32a0d0;
        case 0x32a0d4u: goto label_32a0d4;
        case 0x32a0d8u: goto label_32a0d8;
        case 0x32a0dcu: goto label_32a0dc;
        case 0x32a0e0u: goto label_32a0e0;
        case 0x32a0e4u: goto label_32a0e4;
        case 0x32a0e8u: goto label_32a0e8;
        case 0x32a0ecu: goto label_32a0ec;
        case 0x32a0f0u: goto label_32a0f0;
        case 0x32a0f4u: goto label_32a0f4;
        case 0x32a0f8u: goto label_32a0f8;
        case 0x32a0fcu: goto label_32a0fc;
        case 0x32a100u: goto label_32a100;
        case 0x32a104u: goto label_32a104;
        case 0x32a108u: goto label_32a108;
        case 0x32a10cu: goto label_32a10c;
        case 0x32a110u: goto label_32a110;
        case 0x32a114u: goto label_32a114;
        case 0x32a118u: goto label_32a118;
        case 0x32a11cu: goto label_32a11c;
        case 0x32a120u: goto label_32a120;
        case 0x32a124u: goto label_32a124;
        case 0x32a128u: goto label_32a128;
        case 0x32a12cu: goto label_32a12c;
        case 0x32a130u: goto label_32a130;
        case 0x32a134u: goto label_32a134;
        default: break;
    }

    ctx->pc = 0x32a030u;

label_32a030:
    // 0x32a030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32a034:
    // 0x32a034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32a038:
    // 0x32a038: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a03c:
    // 0x32a03c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32a03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_32a040:
    // 0x32a040: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32a040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32a044:
    // 0x32a044: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_32a048:
    // 0x32a048: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_32a04c:
    // 0x32a04c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x32a04cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_32a050:
    // 0x32a050: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x32a050u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32a054:
    // 0x32a054: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x32a054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_32a058:
    // 0x32a058: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_32a05c:
    if (ctx->pc == 0x32A05Cu) {
        ctx->pc = 0x32A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A058u;
        // 0x32a05c: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A060u;
        goto label_32a060;
    }
    ctx->pc = 0x32A058u;
    {
        const bool branch_taken_0x32a058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a058) {
            ctx->pc = 0x32A05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A058u;
            // 0x32a05c: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A0F0u;
            goto label_32a0f0;
        }
    }
    ctx->pc = 0x32A060u;
label_32a060:
    // 0x32a060: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x32a060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_32a064:
    // 0x32a064: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32a064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32a068:
    // 0x32a068: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x32a068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_32a06c:
    // 0x32a06c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a070:
    // 0x32a070: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32a070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32a074:
    // 0x32a074: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x32a074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_32a078:
    // 0x32a078: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x32a078u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_32a07c:
    // 0x32a07c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x32a07cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_32a080:
    // 0x32a080: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x32a080u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_32a084:
    // 0x32a084: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x32a084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32a088:
    // 0x32a088: 0x60f809  jalr        $v1
label_32a08c:
    if (ctx->pc == 0x32A08Cu) {
        ctx->pc = 0x32A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A088u;
        // 0x32a08c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A090u;
        goto label_32a090;
    }
    ctx->pc = 0x32A088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32A090u);
        ctx->pc = 0x32A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A088u;
        // 0x32a08c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A088u, 0x32A090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A090u;
label_32a090:
    // 0x32a090: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32a090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32a094:
    // 0x32a094: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a098:
    // 0x32a098: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32a098u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32a09c:
    // 0x32a09c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x32a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_32a0a0:
    // 0x32a0a0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x32a0a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_32a0a4:
    // 0x32a0a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x32a0a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_32a0a8:
    // 0x32a0a8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x32a0a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_32a0ac:
    // 0x32a0ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x32a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32a0b0:
    // 0x32a0b0: 0x60f809  jalr        $v1
label_32a0b4:
    if (ctx->pc == 0x32A0B4u) {
        ctx->pc = 0x32A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0B0u;
        // 0x32a0b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0B8u;
        goto label_32a0b8;
    }
    ctx->pc = 0x32A0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32A0B8u);
        ctx->pc = 0x32A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0B0u;
        // 0x32a0b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A0B0u, 0x32A0B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A0B8u;
label_32a0b8:
    // 0x32a0b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32a0bc:
    // 0x32a0bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a0c0:
    // 0x32a0c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32a0c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32a0c4:
    // 0x32a0c4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x32a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_32a0c8:
    // 0x32a0c8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x32a0c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_32a0cc:
    // 0x32a0cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x32a0ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_32a0d0:
    // 0x32a0d0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x32a0d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_32a0d4:
    // 0x32a0d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x32a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32a0d8:
    // 0x32a0d8: 0x60f809  jalr        $v1
label_32a0dc:
    if (ctx->pc == 0x32A0DCu) {
        ctx->pc = 0x32A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0D8u;
        // 0x32a0dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0E0u;
        goto label_32a0e0;
    }
    ctx->pc = 0x32A0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32A0E0u);
        ctx->pc = 0x32A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0D8u;
        // 0x32a0dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A0D8u, 0x32A0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A0E0u;
label_32a0e0:
    // 0x32a0e0: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x32a0e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_32a0e4:
    // 0x32a0e4: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
label_32a0e8:
    if (ctx->pc == 0x32A0E8u) {
        ctx->pc = 0x32A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0E4u;
        // 0x32a0e8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0ECu;
        goto label_32a0ec;
    }
    ctx->pc = 0x32A0E4u;
    {
        const bool branch_taken_0x32a0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a0e4) {
            ctx->pc = 0x32A0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A0E4u;
            // 0x32a0e8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a068;
        }
    }
    ctx->pc = 0x32A0ECu;
label_32a0ec:
    // 0x32a0ec: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x32a0ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32a0f0:
    // 0x32a0f0: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x32a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_32a0f4:
    // 0x32a0f4: 0xc0c8b4c  jal         func_322D30
label_32a0f8:
    if (ctx->pc == 0x32A0F8u) {
        ctx->pc = 0x32A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0F4u;
        // 0x32a0f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A0FCu;
        goto label_32a0fc;
    }
    ctx->pc = 0x32A0F4u;
    SET_GPR_U32(ctx, 31, 0x32A0FCu);
    ctx->pc = 0x32A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0F4u;
    // 0x32a0f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322D30u, 0x32A0F4u, 0x32A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0FCu;
label_32a0fc:
    // 0x32a0fc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x32a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_32a100:
    // 0x32a100: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x32a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32a104:
    // 0x32a104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32a104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32a108:
    // 0x32a108: 0x34a20031  ori         $v0, $a1, 0x31
    ctx->pc = 0x32a108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49);
label_32a10c:
    // 0x32a10c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_32a110:
    if (ctx->pc == 0x32A110u) {
        ctx->pc = 0x32A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A10Cu;
        // 0x32a110: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A114u;
        goto label_32a114;
    }
    ctx->pc = 0x32A10Cu;
    {
        const bool branch_taken_0x32a10c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x32A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A10Cu;
        // 0x32a110: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a10c) {
            ctx->pc = 0x32A11Cu;
            goto label_32a11c;
        }
    }
    ctx->pc = 0x32A114u;
label_32a114:
    // 0x32a114: 0x34a20035  ori         $v0, $a1, 0x35
    ctx->pc = 0x32a114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53);
label_32a118:
    // 0x32a118: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x32a118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_32a11c:
    // 0x32a11c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32a120:
    // 0x32a120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32a120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32a124:
    // 0x32a124: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32a124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32a128:
    // 0x32a128: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32a128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32a12c:
    // 0x32a12c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x32a12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32a130:
    // 0x32a130: 0x3e00008  jr          $ra
label_32a134:
    if (ctx->pc == 0x32A134u) {
        ctx->pc = 0x32A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A130u;
        // 0x32a134: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A138u;
        goto label_fallthrough_0x32a130;
    }
    ctx->pc = 0x32A130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A130u;
        // 0x32a134: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32a130:
    ctx->pc = 0x32A138u;
}
