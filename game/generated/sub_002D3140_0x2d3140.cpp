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

// Function: sub_002D3140
// Address: 0x2d3140 - 0x2d3250
void sub_002D3140_0x2d3140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3140_0x2d3140");
#endif

    switch (ctx->pc) {
        case 0x2d3198u: goto label_2d3198;
        case 0x2d31a8u: goto label_2d31a8;
        case 0x2d31f0u: goto label_2d31f0;
        default: break;
    }

    ctx->pc = 0x2d3140u;

    // 0x2d3140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d3140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d3144: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d3144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d3148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d314c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2d314cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d3150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d3150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d3154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d3154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3158: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d3158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d315c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2d315cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d3160: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d3160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d3164: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x2d3164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2d3168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d3168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d316c: 0xae250074  sw          $a1, 0x74($s1)
    ctx->pc = 0x2d316cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 5));
    // 0x2d3170: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x2d3170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2d3174: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2d3174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2d3178: 0xae260078  sw          $a2, 0x78($s1)
    ctx->pc = 0x2d3178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 6));
    // 0x2d317c: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x2d317cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x2d3180: 0x245032a0  addiu       $s0, $v0, 0x32A0
    ctx->pc = 0x2d3180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12960));
    // 0x2d3184: 0xae270070  sw          $a3, 0x70($s1)
    ctx->pc = 0x2d3184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 7));
    // 0x2d3188: 0x245232a8  addiu       $s2, $v0, 0x32A8
    ctx->pc = 0x2d3188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12968));
    // 0x2d318c: 0x8e260084  lw          $a2, 0x84($s1)
    ctx->pc = 0x2d318cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2d3190: 0xc0b4bf6  jal         func_2D2FD8
    ctx->pc = 0x2D3190u;
    SET_GPR_U32(ctx, 31, 0x2D3198u);
    ctx->pc = 0x2D3194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3190u;
    // 0x2d3194: 0x245332a4  addiu       $s3, $v0, 0x32A4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2FD8u, 0x2D3190u, 0x2D3198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3198u;
label_2d3198:
    // 0x2d3198: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x2d3198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x2d319c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d319cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d31a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d31a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d31a4: 0x0  nop
    ctx->pc = 0x2d31a4u;
    // NOP
label_2d31a8:
    // 0x2d31a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d31ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d31acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d31b0: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x2d31b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2d31b4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d31b8: 0x28a30012  slti        $v1, $a1, 0x12
    ctx->pc = 0x2d31b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2d31bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D31BCu;
    {
        const bool branch_taken_0x2d31bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31BCu;
        // 0x2d31c0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d31bc) {
            ctx->pc = 0x2D31A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d31a8;
        }
    }
    ctx->pc = 0x2D31C4u;
    // 0x2d31c4: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2d31c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2d31c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d31c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d31cc: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x2d31ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x2d31d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d31d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d31d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2d31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2d31d8: 0x3c01c4fa  lui         $at, 0xC4FA
    ctx->pc = 0x2d31d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50426 << 16));
    // 0x2d31dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d31dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d31e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d31e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d31e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d31e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2d31e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2d31ec: 0x0  nop
    ctx->pc = 0x2d31ecu;
    // NOP
label_2d31f0:
    // 0x2d31f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d31f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d31f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d31f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d31f8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2d31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d31fc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2d31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2d3200: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d3200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d3204: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d3204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d3208: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2d3208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2d320c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d320cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d3210: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d3210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d3214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d3214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d3218: 0x18a0fff5  blez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D3218u;
    {
        const bool branch_taken_0x2d3218 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2D321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3218u;
        // 0x2d321c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3218) {
            ctx->pc = 0x2D31F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d31f0;
        }
    }
    ctx->pc = 0x2D3220u;
    // 0x2d3220: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x2d3220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x2d3224: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2d3224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x2d3228: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x2d3228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x2d322c: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x2d322cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x2d3230: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x2d3230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x2d3234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3238: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d3238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d323c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d323cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3240: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d3240u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3244: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d3244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3248: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3248u;
        // 0x2d324c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3250u;
}
