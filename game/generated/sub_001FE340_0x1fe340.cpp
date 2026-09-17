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

// Function: sub_001FE340
// Address: 0x1fe340 - 0x1fe3a0
void sub_001FE340_0x1fe340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE340_0x1fe340");
#endif

    switch (ctx->pc) {
        case 0x1fe35cu: goto label_1fe35c;
        default: break;
    }

    ctx->pc = 0x1fe340u;

    // 0x1fe340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe34c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fe34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fe350: 0xc60c0068  lwc1        $f12, 0x68($s0)
    ctx->pc = 0x1fe350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe354: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x1FE354u;
    SET_GPR_U32(ctx, 31, 0x1FE35Cu);
    ctx->pc = 0x1FE358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE354u;
    // 0x1fe358: 0xc60d0070  lwc1        $f13, 0x70($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x1FE354u, 0x1FE35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE35Cu;
label_1fe35c:
    // 0x1fe35c: 0xc7818224  lwc1        $f1, -0x7DDC($gp)
    ctx->pc = 0x1fe35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe360: 0x96020078  lhu         $v0, 0x78($s0)
    ctx->pc = 0x1fe360u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1fe364: 0x2405f8e4  addiu       $a1, $zero, -0x71C
    ctx->pc = 0x1fe364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965476));
    // 0x1fe368: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fe368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fe36c: 0x2404071c  addiu       $a0, $zero, 0x71C
    ctx->pc = 0x1fe36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x1fe370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe374: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fe374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe378: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fe378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1fe37c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1fe37cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fe380: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1fe380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1fe384: 0xa3200b  movn        $a0, $a1, $v1
    ctx->pc = 0x1fe384u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x1fe388: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1fe388u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fe38c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1fe38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1fe390: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1fe390u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1fe394: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE394u;
        // 0x1fe398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE39Cu;
    // 0x1fe39c: 0x0  nop
    ctx->pc = 0x1fe39cu;
    // NOP
    ctx->pc = 0x1fe3a0u;
}
