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

// Function: sub_0024E358
// Address: 0x24e358 - 0x24e3d8
void sub_0024E358_0x24e358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E358_0x24e358");
#endif

    ctx->pc = 0x24e358u;

    // 0x24e358: 0x8488006c  lh          $t0, 0x6C($a0)
    ctx->pc = 0x24e358u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x24e35c: 0x1900001a  blez        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24E35Cu;
    {
        const bool branch_taken_0x24e35c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x24E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E35Cu;
        // 0x24e360: 0x9489006c  lhu         $t1, 0x6C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e35c) {
            ctx->pc = 0x24E3C8u;
            goto label_24e3c8;
        }
    }
    ctx->pc = 0x24E364u;
    // 0x24e364: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x24e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e368: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e36c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e370: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24e370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e374: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x24E374u;
    {
        const bool branch_taken_0x24e374 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e374) {
            ctx->pc = 0x24E378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E374u;
            // 0x24e378: 0x94820064  lhu         $v0, 0x64($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E3CCu;
            goto label_24e3cc;
        }
    }
    ctx->pc = 0x24E37Cu;
    // 0x24e37c: 0x54e0000c  bnel        $a3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x24E37Cu;
    {
        const bool branch_taken_0x24e37c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e37c) {
            ctx->pc = 0x24E380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E37Cu;
            // 0x24e380: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E3B0u;
            goto label_24e3b0;
        }
    }
    ctx->pc = 0x24E384u;
    // 0x24e384: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x24e384u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x24e388: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24e388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24e38c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x24e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x24e390: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24e390u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24e394: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x24e394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24e398: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24E398u;
    {
        const bool branch_taken_0x24e398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E398u;
        // 0x24e39c: 0xa483006a  sh          $v1, 0x6A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e398) {
            ctx->pc = 0x24E3C8u;
            goto label_24e3c8;
        }
    }
    ctx->pc = 0x24E3A0u;
    // 0x24e3a0: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E3A0u;
    {
        const bool branch_taken_0x24e3a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e3a0) {
            ctx->pc = 0x24E3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E3A0u;
            // 0x24e3a4: 0xa489006a  sh          $t1, 0x6A($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E3C8u;
            goto label_24e3c8;
        }
    }
    ctx->pc = 0x24E3A8u;
    // 0x24e3a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24E3A8u;
    {
        const bool branch_taken_0x24e3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3A8u;
        // 0x24e3ac: 0xa480006a  sh          $zero, 0x6A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3a8) {
            ctx->pc = 0x24E3C8u;
            goto label_24e3c8;
        }
    }
    ctx->pc = 0x24E3B0u;
label_24e3b0:
    // 0x24e3b0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24e3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e3b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24e3b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24e3b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24e3b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24e3bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x24e3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24e3c0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x24e3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x24e3c4: 0xa482006a  sh          $v0, 0x6A($a0)
    ctx->pc = 0x24e3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 2));
label_24e3c8:
    // 0x24e3c8: 0x94820064  lhu         $v0, 0x64($a0)
    ctx->pc = 0x24e3c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_24e3cc:
    // 0x24e3cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24e3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x24E3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3D0u;
        // 0x24e3d4: 0xa4820064  sh          $v0, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E3D8u;
}
