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

// Function: sub_00276358
// Address: 0x276358 - 0x276420
void sub_00276358_0x276358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276358_0x276358");
#endif

    switch (ctx->pc) {
        case 0x276368u: goto label_276368;
        case 0x276390u: goto label_276390;
        default: break;
    }

    ctx->pc = 0x276358u;

    // 0x276358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27635c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27635cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276360: 0xc09d480  jal         func_275200
    ctx->pc = 0x276360u;
    SET_GPR_U32(ctx, 31, 0x276368u);
    ctx->pc = 0x276364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276360u;
    // 0x276364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x276360u, 0x276368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276368u;
label_276368:
    // 0x276368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x276368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27636c: 0x8f82ae90  lw          $v0, -0x5170($gp)
    ctx->pc = 0x27636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x276370: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x276370u;
    {
        const bool branch_taken_0x276370 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x276374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276370u;
        // 0x276374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276370) {
            ctx->pc = 0x276414u;
            goto label_276414;
        }
    }
    ctx->pc = 0x276378u;
    // 0x276378: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x276378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27637c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27637cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x276380: 0x240a000d  addiu       $t2, $zero, 0xD
    ctx->pc = 0x276380u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x276384: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x276384u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x276388: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x276388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27638c: 0x0  nop
    ctx->pc = 0x27638cu;
    // NOP
label_276390:
    // 0x276390: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x276390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x276394: 0x544a0016  bnel        $v0, $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x276394u;
    {
        const bool branch_taken_0x276394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x276394) {
            ctx->pc = 0x276398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276394u;
            // 0x276398: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2763F0u;
            goto label_2763f0;
        }
    }
    ctx->pc = 0x27639Cu;
    // 0x27639c: 0x252688d0  addiu       $a2, $t1, -0x7730
    ctx->pc = 0x27639cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936784));
    // 0x2763a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2763a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2763a4: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x2763a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x2763a8: 0x10680002  beq         $v1, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2763A8u;
    {
        const bool branch_taken_0x2763a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x2763ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2763A8u;
        // 0x2763ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763a8) {
            ctx->pc = 0x2763B4u;
            goto label_2763b4;
        }
    }
    ctx->pc = 0x2763B0u;
    // 0x2763b0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2763b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2763b4:
    // 0x2763b4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2763b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2763b8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2763b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2763bc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2763bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2763c0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2763c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2763c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2763c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2763c8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2763c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2763cc: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x2763ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x2763d0: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x2763d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2763d4: 0xa482007a  sh          $v0, 0x7A($a0)
    ctx->pc = 0x2763d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x2763d8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2763d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2763dc: 0xe48206c4  swc1        $f2, 0x6C4($a0)
    ctx->pc = 0x2763dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1732), bits); }
    // 0x2763e0: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x2763e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x2763e4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2763e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2763e8: 0xe48206c8  swc1        $f2, 0x6C8($a0)
    ctx->pc = 0x2763e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1736), bits); }
    // 0x2763ec: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2763ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2763f0:
    // 0x2763f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2763f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2763f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2763f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2763f8: 0xe4810758  swc1        $f1, 0x758($a0)
    ctx->pc = 0x2763f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1880), bits); }
    // 0x2763fc: 0xe4800750  swc1        $f0, 0x750($a0)
    ctx->pc = 0x2763fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1872), bits); }
    // 0x276400: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x276400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x276404: 0x8f82ae90  lw          $v0, -0x5170($gp)
    ctx->pc = 0x276404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x276408: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x276408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27640c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x27640Cu;
    {
        const bool branch_taken_0x27640c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27640Cu;
        // 0x276410: 0x248408d0  addiu       $a0, $a0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27640c) {
            ctx->pc = 0x276390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276390;
        }
    }
    ctx->pc = 0x276414u;
label_276414:
    // 0x276414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276418: 0x3e00008  jr          $ra
    ctx->pc = 0x276418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276418u;
        // 0x27641c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276420u;
}
