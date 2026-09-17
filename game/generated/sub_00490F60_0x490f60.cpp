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

// Function: sub_00490F60
// Address: 0x490f60 - 0x491418
void sub_00490F60_0x490f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490F60_0x490f60");
#endif

    switch (ctx->pc) {
        case 0x490f98u: goto label_490f98;
        case 0x491078u: goto label_491078;
        case 0x4910b4u: goto label_4910b4;
        case 0x4910c4u: goto label_4910c4;
        case 0x4910d4u: goto label_4910d4;
        case 0x491108u: goto label_491108;
        case 0x49113cu: goto label_49113c;
        case 0x49114cu: goto label_49114c;
        case 0x4911ccu: goto label_4911cc;
        case 0x491204u: goto label_491204;
        case 0x491268u: goto label_491268;
        default: break;
    }

    ctx->pc = 0x490f60u;

    // 0x490f60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x490f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x490f64: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x490f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x490f68: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x490f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x490f6c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x490f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x490f70: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x490f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x490f74: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x490f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x490f78: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x490f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x490f7c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x490f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x490f80: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x490f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x490f84: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x490f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x490f88: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x490f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x490f8c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x490f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x490f90: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x490F90u;
    SET_GPR_U32(ctx, 31, 0x490F98u);
    ctx->pc = 0x490F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490F90u;
    // 0x490f94: 0x3c15ffff  lui         $s5, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x490F90u, 0x490F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490F98u;
label_490f98:
    // 0x490f98: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x490f98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490f9c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x490f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x490fa0: 0x2457d680  addiu       $s7, $v0, -0x2980
    ctx->pc = 0x490fa0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x490fa4: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x490fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490fa8: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x490fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x490fac: 0x27aa0004  addiu       $t2, $sp, 0x4
    ctx->pc = 0x490facu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x490fb0: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x490fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x490fb4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x490fb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x490fb8: 0x86e400ae  lh          $a0, 0xAE($s7)
    ctx->pc = 0x490fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72D72Eu));
    // 0x490fbc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x490fbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x490fc0: 0x86e300b0  lh          $v1, 0xB0($s7)
    ctx->pc = 0x490fc0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D730u));
    // 0x490fc4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x490fc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x490fc8: 0x86e200b2  lh          $v0, 0xB2($s7)
    ctx->pc = 0x490fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D732u));
    // 0x490fcc: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x490fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x490fd0: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x490fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x490fd4: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x490fd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x490fd8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x490fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x490fdc: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x490fdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x490fe0: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x490fe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x490fe4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x490fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x490fe8: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x490fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x490fec: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x490fecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x490ff0: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x490ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x490ff4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x490ff4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x490ff8: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x490ff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490ffc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x490ffcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x491000: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x491000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x491004: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x491004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x491008: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x491008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49100c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x49100cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491010: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x491010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x491014: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x491014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491018: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x491018u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49101c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x49101cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491020: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x491020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x491024: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x491024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x491028: 0x245414e0  addiu       $s4, $v0, 0x14E0
    ctx->pc = 0x491028u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 5344));
    // 0x49102c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x49102cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x491030: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x491030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x491034: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x491034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x491038: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x491038u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49103c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x49103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x491040: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x491040u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x491044: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x491044u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491048: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x491048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x49104c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x49104cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x491050: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x491050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x491054: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x491054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x491058: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x491058u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49105c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x49105cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x491060: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x491060u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x491064: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x491064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491068: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x491068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x49106c: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x49106cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x491070: 0xc12aa44  jal         func_4AA910
    ctx->pc = 0x491070u;
    SET_GPR_U32(ctx, 31, 0x491078u);
    ctx->pc = 0x491074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491070u;
    // 0x491074: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA910u, 0x491070u, 0x491078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491078u;
label_491078:
    // 0x491078: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x491078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49107c: 0x27b2000c  addiu       $s2, $sp, 0xC
    ctx->pc = 0x49107cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x491080: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x491080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x491084: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x491084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491088: 0x97a50008  lhu         $a1, 0x8($sp)
    ctx->pc = 0x491088u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49108c: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x49108cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x491090: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x491090u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491094: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x491094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x491098: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x491098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x49109c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49109cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4910a0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4910a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4910a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4910a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4910a8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4910a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x4910ac: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4910ACu;
    SET_GPR_U32(ctx, 31, 0x4910B4u);
    ctx->pc = 0x4910B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4910ACu;
    // 0x4910b0: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4910ACu, 0x4910B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4910B4u;
label_4910b4:
    // 0x4910b4: 0x87a4000c  lh          $a0, 0xC($sp)
    ctx->pc = 0x4910b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4910b8: 0x97b30004  lhu         $s3, 0x4($sp)
    ctx->pc = 0x4910b8u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4910bc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4910BCu;
    SET_GPR_U32(ctx, 31, 0x4910C4u);
    ctx->pc = 0x4910C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4910BCu;
    // 0x4910c0: 0x97be000c  lhu         $fp, 0xC($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4910BCu, 0x4910C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4910C4u;
label_4910c4:
    // 0x4910c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4910c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4910c8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4910c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4910cc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4910CCu;
    SET_GPR_U32(ctx, 31, 0x4910D4u);
    ctx->pc = 0x4910D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4910CCu;
    // 0x4910d0: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4910CCu, 0x4910D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4910D4u;
label_4910d4:
    // 0x4910d4: 0x87a20008  lh          $v0, 0x8($sp)
    ctx->pc = 0x4910d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4910d8: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x4910d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4910dc: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4910dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4910e0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x4910e0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x4910e4: 0x87a50010  lh          $a1, 0x10($sp)
    ctx->pc = 0x4910e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4910e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4910e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4910ec: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4910ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4910f0: 0x502818  mult        $a1, $v0, $s0
    ctx->pc = 0x4910f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4910f4: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x4910f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4910f8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4910f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4910fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4910fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x491100: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x491100u;
    SET_GPR_U32(ctx, 31, 0x491108u);
    ctx->pc = 0x491104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491100u;
    // 0x491104: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x491100u, 0x491108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491108u;
label_491108:
    // 0x491108: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x491108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49110c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x49110cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491110: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x491110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x491114: 0x97a40008  lhu         $a0, 0x8($sp)
    ctx->pc = 0x491114u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x491118: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x491118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x49111c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x49111cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x491120: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x491120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x491124: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x491124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x491128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x491128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49112c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x49112cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491130: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x491130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x491134: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x491134u;
    SET_GPR_U32(ctx, 31, 0x49113Cu);
    ctx->pc = 0x491138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491134u;
    // 0x491138: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x491134u, 0x49113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49113Cu;
label_49113c:
    // 0x49113c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x49113cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x491140: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x491140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x491144: 0xc128b6e  jal         func_4A2DB8
    ctx->pc = 0x491144u;
    SET_GPR_U32(ctx, 31, 0x49114Cu);
    ctx->pc = 0x491148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491144u;
    // 0x491148: 0x97b0000c  lhu         $s0, 0xC($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2DB8u, 0x491144u, 0x49114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49114Cu;
label_49114c:
    // 0x49114c: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x49114Cu;
    {
        const bool branch_taken_0x49114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x491150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49114Cu;
        // 0x491150: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49114c) {
            ctx->pc = 0x4913E8u;
            goto label_4913e8;
        }
    }
    ctx->pc = 0x491154u;
    // 0x491154: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x491154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x491158: 0x26f20092  addiu       $s2, $s7, 0x92
    ctx->pc = 0x491158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 146));
    // 0x49115c: 0x24170580  addiu       $s7, $zero, 0x580
    ctx->pc = 0x49115cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x491160: 0xa4510000  sh          $s1, 0x0($v0)
    ctx->pc = 0x491160u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x491164: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491168: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x491168u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x49116c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x49116cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491170: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x491170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x491174: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x491174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x491178: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x491178u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49117c: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x49117cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x491180: 0x84890120  lh          $t1, 0x120($a0)
    ctx->pc = 0x491180u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x491184: 0x1e2400  sll         $a0, $fp, 16
    ctx->pc = 0x491184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 16));
    // 0x491188: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x491188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x49118c: 0x2413ff35  addiu       $s3, $zero, -0xCB
    ctx->pc = 0x49118cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
    // 0x491190: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x491190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x491194: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x491194u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x491198: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491198u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49119c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x49119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x4911a0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4911a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4911a4: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x4911a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4911a8: 0x24050158  addiu       $a1, $zero, 0x158
    ctx->pc = 0x4911a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x4911ac: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4911acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4911b0: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x4911b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4911b4: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4911b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4911b8: 0xa4f30000  sh          $s3, 0x0($a3)
    ctx->pc = 0x4911b8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x4911bc: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4911bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x4911c0: 0xa5170000  sh          $s7, 0x0($t0)
    ctx->pc = 0x4911c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 23));
    // 0x4911c4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4911C4u;
    SET_GPR_U32(ctx, 31, 0x4911CCu);
    ctx->pc = 0x4911C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4911C4u;
    // 0x4911c8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4911C4u, 0x4911CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4911CCu;
label_4911cc:
    // 0x4911cc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4911ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4911d0: 0x551824  and         $v1, $v0, $s5
    ctx->pc = 0x4911d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4911d4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4911d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4911d8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4911d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4911dc: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x4911dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4911e0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4911e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4911e4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4911e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4911e8: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4911e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4911ec: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x4911ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4911f0: 0x97a20010  lhu         $v0, 0x10($sp)
    ctx->pc = 0x4911f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4911f4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4911f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4911f8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4911f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4911fc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4911FCu;
    SET_GPR_U32(ctx, 31, 0x491204u);
    ctx->pc = 0x491200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4911FCu;
    // 0x491200: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4911FCu, 0x491204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491204u;
label_491204:
    // 0x491204: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x491204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x491208: 0x551824  and         $v1, $v0, $s5
    ctx->pc = 0x491208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x49120c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x49120cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x491210: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x491210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x491214: 0x240a7fff  addiu       $t2, $zero, 0x7FFF
    ctx->pc = 0x491214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x491218: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x491218u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49121c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x49121cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x491220: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x491220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x491224: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x491224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x491228: 0x97a20010  lhu         $v0, 0x10($sp)
    ctx->pc = 0x491228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49122c: 0x24c80006  addiu       $t0, $a2, 0x6
    ctx->pc = 0x49122cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x491230: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x491230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x491234: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x491234u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x491238: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x491238u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49123c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x49123cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x491240: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x491240u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x491244: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x491244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491248: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x491248u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49124c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x49124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x491250: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x491250u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x491254: 0xa4ea0000  sh          $t2, 0x0($a3)
    ctx->pc = 0x491254u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x491258: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x491258u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x49125c: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x49125cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x491260: 0xc128b6e  jal         func_4A2DB8
    ctx->pc = 0x491260u;
    SET_GPR_U32(ctx, 31, 0x491268u);
    ctx->pc = 0x491264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x491260u;
    // 0x491264: 0xae860000  sw          $a2, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2DB8u, 0x491260u, 0x491268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491268u;
label_491268:
    // 0x491268: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x491268u;
    {
        const bool branch_taken_0x491268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491268u;
        // 0x49126c: 0x26ca000e  addiu       $t2, $s6, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491268) {
            ctx->pc = 0x4913E8u;
            goto label_4913e8;
        }
    }
    ctx->pc = 0x491270u;
    // 0x491270: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x491270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x491274: 0xa4510000  sh          $s1, 0x0($v0)
    ctx->pc = 0x491274u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x491278: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49127c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x49127cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x491280: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x491280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491284: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x491284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x491288: 0x24460006  addiu       $a2, $v0, 0x6
    ctx->pc = 0x491288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x49128c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x49128cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x491290: 0x24470008  addiu       $a3, $v0, 0x8
    ctx->pc = 0x491290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x491294: 0x84a90122  lh          $t1, 0x122($a1)
    ctx->pc = 0x491294u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 290)));
    // 0x491298: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x491298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x49129c: 0x2448000a  addiu       $t0, $v0, 0xA
    ctx->pc = 0x49129cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x4912a0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4912a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x4912a4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4912a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4912a8: 0x24020158  addiu       $v0, $zero, 0x158
    ctx->pc = 0x4912a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x4912ac: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4912acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4912b0: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x4912b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4912b4: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4912b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4912b8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4912b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4912bc: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4912bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4912c0: 0xa4d30000  sh          $s3, 0x0($a2)
    ctx->pc = 0x4912c0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x4912c4: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4912c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4912c8: 0xa4f70000  sh          $s7, 0x0($a3)
    ctx->pc = 0x4912c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 23));
    // 0x4912cc: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4912ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x4912d0: 0x96c2000c  lhu         $v0, 0xC($s6)
    ctx->pc = 0x4912d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x4912d4: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4912d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4912d8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4912d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4912dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4912dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4912e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4912E0u;
    {
        const bool branch_taken_0x4912e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4912E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4912E0u;
        // 0x4912e4: 0x24c03  sra         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4912e0) {
            ctx->pc = 0x4912F8u;
            goto label_4912f8;
        }
    }
    ctx->pc = 0x4912E8u;
    // 0x4912e8: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x4912e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4912ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4912ECu;
    {
        const bool branch_taken_0x4912ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4912F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4912ECu;
        // 0x4912f0: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4912ec) {
            ctx->pc = 0x4912FCu;
            goto label_4912fc;
        }
    }
    ctx->pc = 0x4912F4u;
    // 0x4912f4: 0x0  nop
    ctx->pc = 0x4912f4u;
    // NOP
label_4912f8:
    // 0x4912f8: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x4912f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_4912fc:
    // 0x4912fc: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x4912fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x491300: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x491300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x491304: 0x26c60012  addiu       $a2, $s6, 0x12
    ctx->pc = 0x491304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 18));
    // 0x491308: 0x24a414e0  addiu       $a0, $a1, 0x14E0
    ctx->pc = 0x491308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5344));
    // 0x49130c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49130cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7E14E0u));
    // 0x491310: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491310u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491314: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491318: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x491318u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E14E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14E0u, _value); } while (0);
    // 0x49131c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x49131cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491320: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x491320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x491324: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491324u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491328: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x491328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7E14E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14E0u, _value); } while (0);
    // 0x49132c: 0x96c20010  lhu         $v0, 0x10($s6)
    ctx->pc = 0x49132cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x491330: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x491330u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x491334: 0x21023  negu        $v0, $v0
    ctx->pc = 0x491334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x491338: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x491338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49133c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x49133Cu;
    {
        const bool branch_taken_0x49133c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x491340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49133Cu;
        // 0x491340: 0x24c03  sra         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49133c) {
            ctx->pc = 0x491350u;
            goto label_491350;
        }
    }
    ctx->pc = 0x491344u;
    // 0x491344: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x491344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x491348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x491348u;
    {
        const bool branch_taken_0x491348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491348u;
        // 0x49134c: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491348) {
            ctx->pc = 0x491354u;
            goto label_491354;
        }
    }
    ctx->pc = 0x491350u;
label_491350:
    // 0x491350: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x491350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_491354:
    // 0x491354: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x491354u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x491358: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x491358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x49135c: 0x26c80016  addiu       $t0, $s6, 0x16
    ctx->pc = 0x49135cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 22));
    // 0x491360: 0x244414e0  addiu       $a0, $v0, 0x14E0
    ctx->pc = 0x491360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5344));
    // 0x491364: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x491364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7E14E0u));
    // 0x491368: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491368u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49136c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491370: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x491370u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E14E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14E0u, _value); } while (0);
    // 0x491374: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x491374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491378: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x491378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49137c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x49137cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491380: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x491380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7E14E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14E0u, _value); } while (0);
    // 0x491384: 0x96c20014  lhu         $v0, 0x14($s6)
    ctx->pc = 0x491384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x491388: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x491388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49138c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x49138cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x491390: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x491390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x491394: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x491394u;
    {
        const bool branch_taken_0x491394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x491398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491394u;
        // 0x491398: 0x24c03  sra         $t1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491394) {
            ctx->pc = 0x4913A8u;
            goto label_4913a8;
        }
    }
    ctx->pc = 0x49139Cu;
    // 0x49139c: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x49139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4913a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4913A0u;
    {
        const bool branch_taken_0x4913a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4913A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4913A0u;
        // 0x4913a4: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4913a0) {
            ctx->pc = 0x4913ACu;
            goto label_4913ac;
        }
    }
    ctx->pc = 0x4913A8u;
label_4913a8:
    // 0x4913a8: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x4913a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_4913ac:
    // 0x4913ac: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x4913acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4913b0: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x4913b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x4913b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4913b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4913b8: 0x24a414e0  addiu       $a0, $a1, 0x14E0
    ctx->pc = 0x4913b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5344));
    // 0x4913bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4913bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7E14E0u));
    // 0x4913c0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4913c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4913c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4913c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4913c8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4913c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E14E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14E0u, _value); } while (0);
    // 0x4913cc: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4913ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4913d0: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x4913d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4913d4: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4913d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4913d8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4913d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4913dc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4913dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7E14E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14E0u, _value); } while (0);
    // 0x4913e0: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x4913e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4913e4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4913e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7E14E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14E0u, _value); } while (0);
label_4913e8:
    // 0x4913e8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4913e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4913ec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4913ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4913f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4913f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4913f4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4913f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4913f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4913f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4913fc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4913fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x491400: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x491400u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x491404: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x491404u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x491408: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x491408u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49140c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x49140cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x491410: 0x3e00008  jr          $ra
    ctx->pc = 0x491410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491410u;
        // 0x491414: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491418u;
}
