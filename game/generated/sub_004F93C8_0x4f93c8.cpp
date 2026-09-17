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

// Function: sub_004F93C8
// Address: 0x4f93c8 - 0x4f97e0
void sub_004F93C8_0x4f93c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F93C8_0x4f93c8");
#endif

    switch (ctx->pc) {
        case 0x4f9420u: goto label_4f9420;
        case 0x4f9428u: goto label_4f9428;
        case 0x4f9430u: goto label_4f9430;
        case 0x4f943cu: goto label_4f943c;
        case 0x4f9448u: goto label_4f9448;
        case 0x4f9458u: goto label_4f9458;
        case 0x4f9484u: goto label_4f9484;
        case 0x4f9490u: goto label_4f9490;
        case 0x4f949cu: goto label_4f949c;
        case 0x4f94acu: goto label_4f94ac;
        default: break;
    }

    ctx->pc = 0x4f93c8u;

    // 0x4f93c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f93c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f93cc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4f93ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4f93d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4f93d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4f93d4: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x4f93d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x4f93d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4f93d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4f93dc: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x4f93dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x4f93e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4f93e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4f93e4: 0x2631cb10  addiu       $s1, $s1, -0x34F0
    ctx->pc = 0x4f93e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953744));
    // 0x4f93e8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4f93e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4f93ec: 0x2610cb14  addiu       $s0, $s0, -0x34EC
    ctx->pc = 0x4f93ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953748));
    // 0x4f93f0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4f93f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4f93f4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4f93f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4f93f8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4f93f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4f93fc: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4f93fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4f9400: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4f9400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4f9404: 0x2446bbf8  addiu       $a2, $v0, -0x4408
    ctx->pc = 0x4f9404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949880));
    // 0x4f9408: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x4f9408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4f940c: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x4f940cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4f9410: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x4f9410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4f9414: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x4f9414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4f9418: 0xc144f46  jal         func_513D18
    ctx->pc = 0x4F9418u;
    SET_GPR_U32(ctx, 31, 0x4F9420u);
    ctx->pc = 0x4F941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9418u;
    // 0x4f941c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513D18u, 0x4F9418u, 0x4F9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9420u;
label_4f9420:
    // 0x4f9420: 0xc144f46  jal         func_513D18
    ctx->pc = 0x4F9420u;
    SET_GPR_U32(ctx, 31, 0x4F9428u);
    ctx->pc = 0x4F9424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9420u;
    // 0x4f9424: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513D18u, 0x4F9420u, 0x4F9428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9428u;
label_4f9428:
    // 0x4f9428: 0xc145084  jal         func_514210
    ctx->pc = 0x4F9428u;
    SET_GPR_U32(ctx, 31, 0x4F9430u);
    ctx->pc = 0x4F942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9428u;
    // 0x4f942c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514210u, 0x4F9428u, 0x4F9430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9430u;
label_4f9430:
    // 0x4f9430: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4f9430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f9434: 0xc145086  jal         func_514218
    ctx->pc = 0x4F9434u;
    SET_GPR_U32(ctx, 31, 0x4F943Cu);
    ctx->pc = 0x4F9438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9434u;
    // 0x4f9438: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514218u, 0x4F9434u, 0x4F943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F943Cu;
label_4f943c:
    // 0x4f943c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4f943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f9440: 0xc145084  jal         func_514210
    ctx->pc = 0x4F9440u;
    SET_GPR_U32(ctx, 31, 0x4F9448u);
    ctx->pc = 0x4F9444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9440u;
    // 0x4f9444: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514210u, 0x4F9440u, 0x4F9448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9448u;
label_4f9448:
    // 0x4f9448: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4f9448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f944c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x4f944cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x4f9450: 0xc145086  jal         func_514218
    ctx->pc = 0x4F9450u;
    SET_GPR_U32(ctx, 31, 0x4F9458u);
    ctx->pc = 0x4F9454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9450u;
    // 0x4f9454: 0x3054ffff  andi        $s4, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x514218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514218u, 0x4F9450u, 0x4F9458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9458u;
label_4f9458:
    // 0x4f9458: 0x26c31280  addiu       $v1, $s6, 0x1280
    ctx->pc = 0x4f9458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
    // 0x4f945c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4f945cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f9460: 0xa460000a  sh          $zero, 0xA($v1)
    ctx->pc = 0x4f9460u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f9464: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x4f9464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x4f9468: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x4f9468u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f946c: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x4f946cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f9470: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x4f9470u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f9474: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x4f9474u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f9478: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x4f9478u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f947c: 0xc14508c  jal         func_514230
    ctx->pc = 0x4F947Cu;
    SET_GPR_U32(ctx, 31, 0x4F9484u);
    ctx->pc = 0x4F9480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F947Cu;
    // 0x4f9480: 0xa4600004  sh          $zero, 0x4($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514230u, 0x4F947Cu, 0x4F9484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9484u;
label_4f9484:
    // 0x4f9484: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4f9484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f9488: 0xc1450cc  jal         func_514330
    ctx->pc = 0x4F9488u;
    SET_GPR_U32(ctx, 31, 0x4F9490u);
    ctx->pc = 0x4F948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9488u;
    // 0x4f948c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514330u, 0x4F9488u, 0x4F9490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9490u;
label_4f9490:
    // 0x4f9490: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4f9490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f9494: 0xc14508c  jal         func_514230
    ctx->pc = 0x4F9494u;
    SET_GPR_U32(ctx, 31, 0x4F949Cu);
    ctx->pc = 0x4F9498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9494u;
    // 0x4f9498: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514230u, 0x4F9494u, 0x4F949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F949Cu;
label_4f949c:
    // 0x4f949c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4f949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f94a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4f94a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f94a4: 0xc1450cc  jal         func_514330
    ctx->pc = 0x4F94A4u;
    SET_GPR_U32(ctx, 31, 0x4F94ACu);
    ctx->pc = 0x4F94A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F94A4u;
    // 0x4f94a8: 0x2631ff81  addiu       $s1, $s1, -0x7F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967169));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514330u, 0x4F94A4u, 0x4F94ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F94ACu;
label_4f94ac:
    // 0x4f94ac: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x4f94acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x4f94b0: 0x2663ff81  addiu       $v1, $s3, -0x7F
    ctx->pc = 0x4f94b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967169));
    // 0x4f94b4: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F94B4u;
    {
        const bool branch_taken_0x4f94b4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x4F94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F94B4u;
        // 0x4f94b8: 0x2644ff81  addiu       $a0, $s2, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f94b4) {
            ctx->pc = 0x4F94D8u;
            goto label_4f94d8;
        }
    }
    ctx->pc = 0x4F94BCu;
    // 0x4f94bc: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4F94BCu;
    {
        const bool branch_taken_0x4f94bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4F94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F94BCu;
        // 0x4f94c0: 0x223102a  slt         $v0, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f94bc) {
            ctx->pc = 0x4F94F8u;
            goto label_4f94f8;
        }
    }
    ctx->pc = 0x4F94C4u;
    // 0x4f94c4: 0x222180a  movz        $v1, $s1, $v0
    ctx->pc = 0x4f94c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x4f94c8: 0x2463007f  addiu       $v1, $v1, 0x7F
    ctx->pc = 0x4f94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x4f94cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4F94CCu;
    {
        const bool branch_taken_0x4f94cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F94CCu;
        // 0x4f94d0: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f94cc) {
            ctx->pc = 0x4F9504u;
            goto label_4f9504;
        }
    }
    ctx->pc = 0x4F94D4u;
    // 0x4f94d4: 0x0  nop
    ctx->pc = 0x4f94d4u;
    // NOP
label_4f94d8:
    // 0x4f94d8: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F94D8u;
    {
        const bool branch_taken_0x4f94d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4F94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F94D8u;
        // 0x4f94dc: 0x711021  addu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f94d8) {
            ctx->pc = 0x4F94FCu;
            goto label_4f94fc;
        }
    }
    ctx->pc = 0x4F94E0u;
    // 0x4f94e0: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x4f94e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4f94e4: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x4f94e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x4f94e8: 0x2623007f  addiu       $v1, $s1, 0x7F
    ctx->pc = 0x4f94e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 127));
    // 0x4f94ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4F94ECu;
    {
        const bool branch_taken_0x4f94ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F94ECu;
        // 0x4f94f0: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f94ec) {
            ctx->pc = 0x4F9504u;
            goto label_4f9504;
        }
    }
    ctx->pc = 0x4F94F4u;
    // 0x4f94f4: 0x0  nop
    ctx->pc = 0x4f94f4u;
    // NOP
label_4f94f8:
    // 0x4f94f8: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x4f94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4f94fc:
    // 0x4f94fc: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x4f94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x4f9500: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x4f9500u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4f9504:
    // 0x4f9504: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F9504u;
    {
        const bool branch_taken_0x4f9504 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x4f9504) {
            ctx->pc = 0x4F9528u;
            goto label_4f9528;
        }
    }
    ctx->pc = 0x4F950Cu;
    // 0x4f950c: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x4F950Cu;
    {
        const bool branch_taken_0x4f950c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4F9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F950Cu;
        // 0x4f9510: 0xa4102a  slt         $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f950c) {
            ctx->pc = 0x4F9548u;
            goto label_4f9548;
        }
    }
    ctx->pc = 0x4F9514u;
    // 0x4f9514: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x4f9514u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x4f9518: 0x2483007f  addiu       $v1, $a0, 0x7F
    ctx->pc = 0x4f9518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x4f951c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4F951Cu;
    {
        const bool branch_taken_0x4f951c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F951Cu;
        // 0x4f9520: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f951c) {
            ctx->pc = 0x4F9554u;
            goto label_4f9554;
        }
    }
    ctx->pc = 0x4F9524u;
    // 0x4f9524: 0x0  nop
    ctx->pc = 0x4f9524u;
    // NOP
label_4f9528:
    // 0x4f9528: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F9528u;
    {
        const bool branch_taken_0x4f9528 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4F952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9528u;
        // 0x4f952c: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9528) {
            ctx->pc = 0x4F954Cu;
            goto label_4f954c;
        }
    }
    ctx->pc = 0x4F9530u;
    // 0x4f9530: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x4f9530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4f9534: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x4f9534u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x4f9538: 0x24a3007f  addiu       $v1, $a1, 0x7F
    ctx->pc = 0x4f9538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x4f953c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4F953Cu;
    {
        const bool branch_taken_0x4f953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F953Cu;
        // 0x4f9540: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f953c) {
            ctx->pc = 0x4F9554u;
            goto label_4f9554;
        }
    }
    ctx->pc = 0x4F9544u;
    // 0x4f9544: 0x0  nop
    ctx->pc = 0x4f9544u;
    // NOP
label_4f9548:
    // 0x4f9548: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x4f9548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f954c:
    // 0x4f954c: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x4f954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x4f9550: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x4f9550u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4f9554:
    // 0x4f9554: 0x26c31280  addiu       $v1, $s6, 0x1280
    ctx->pc = 0x4f9554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
    // 0x4f9558: 0x32822000  andi        $v0, $s4, 0x2000
    ctx->pc = 0x4f9558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8192);
    // 0x4f955c: 0xa4730012  sh          $s3, 0x12($v1)
    ctx->pc = 0x4f955cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 19));
    // 0x4f9560: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F9560u;
    {
        const bool branch_taken_0x4f9560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9560u;
        // 0x4f9564: 0xa4720014  sh          $s2, 0x14($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9560) {
            ctx->pc = 0x4F9574u;
            goto label_4f9574;
        }
    }
    ctx->pc = 0x4F9568u;
    // 0x4f9568: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f9568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f956c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4f956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4f9570: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f9570u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f9574:
    // 0x4f9574: 0x32828000  andi        $v0, $s4, 0x8000
    ctx->pc = 0x4f9574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32768);
    // 0x4f9578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F9578u;
    {
        const bool branch_taken_0x4f9578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9578u;
        // 0x4f957c: 0x32824000  andi        $v0, $s4, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9578) {
            ctx->pc = 0x4F9590u;
            goto label_4f9590;
        }
    }
    ctx->pc = 0x4F9580u;
    // 0x4f9580: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f9580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f9584: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4f9584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4f9588: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f9588u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f958c: 0x32824000  andi        $v0, $s4, 0x4000
    ctx->pc = 0x4f958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16384);
label_4f9590:
    // 0x4f9590: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F9590u;
    {
        const bool branch_taken_0x4f9590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9590u;
        // 0x4f9594: 0x32821000  andi        $v0, $s4, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9590) {
            ctx->pc = 0x4F95A8u;
            goto label_4f95a8;
        }
    }
    ctx->pc = 0x4F9598u;
    // 0x4f9598: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f9598u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f959c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4f959cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4f95a0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f95a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f95a4: 0x32821000  andi        $v0, $s4, 0x1000
    ctx->pc = 0x4f95a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4096);
label_4f95a8:
    // 0x4f95a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F95A8u;
    {
        const bool branch_taken_0x4f95a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F95A8u;
        // 0x4f95ac: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f95a8) {
            ctx->pc = 0x4F95C0u;
            goto label_4f95c0;
        }
    }
    ctx->pc = 0x4F95B0u;
    // 0x4f95b0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f95b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f95b4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4f95b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4f95b8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f95b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f95bc: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x4f95bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_4f95c0:
    // 0x4f95c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F95C0u;
    {
        const bool branch_taken_0x4f95c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F95C0u;
        // 0x4f95c4: 0x32820020  andi        $v0, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f95c0) {
            ctx->pc = 0x4F95D8u;
            goto label_4f95d8;
        }
    }
    ctx->pc = 0x4F95C8u;
    // 0x4f95c8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f95c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f95cc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4f95ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x4f95d0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f95d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f95d4: 0x32820020  andi        $v0, $s4, 0x20
    ctx->pc = 0x4f95d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
label_4f95d8:
    // 0x4f95d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F95D8u;
    {
        const bool branch_taken_0x4f95d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F95D8u;
        // 0x4f95dc: 0x32820040  andi        $v0, $s4, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f95d8) {
            ctx->pc = 0x4F95F0u;
            goto label_4f95f0;
        }
    }
    ctx->pc = 0x4F95E0u;
    // 0x4f95e0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f95e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f95e4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4f95e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x4f95e8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f95e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f95ec: 0x32820040  andi        $v0, $s4, 0x40
    ctx->pc = 0x4f95ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
label_4f95f0:
    // 0x4f95f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F95F0u;
    {
        const bool branch_taken_0x4f95f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F95F0u;
        // 0x4f95f4: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f95f0) {
            ctx->pc = 0x4F9608u;
            goto label_4f9608;
        }
    }
    ctx->pc = 0x4F95F8u;
    // 0x4f95f8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f95f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f95fc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4f95fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x4f9600: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f9600u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f9604: 0x32820008  andi        $v0, $s4, 0x8
    ctx->pc = 0x4f9604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_4f9608:
    // 0x4f9608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F9608u;
    {
        const bool branch_taken_0x4f9608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9608u;
        // 0x4f960c: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9608) {
            ctx->pc = 0x4F9620u;
            goto label_4f9620;
        }
    }
    ctx->pc = 0x4F9610u;
    // 0x4f9610: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f9610u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f9614: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4f9614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x4f9618: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f9618u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f961c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x4f961cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_4f9620:
    // 0x4f9620: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4f9620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f9624: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F9624u;
    {
        const bool branch_taken_0x4f9624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9624u;
        // 0x4f9628: 0x32820004  andi        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9624) {
            ctx->pc = 0x4F963Cu;
            goto label_4f963c;
        }
    }
    ctx->pc = 0x4F962Cu;
    // 0x4f962c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f962cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f9630: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x4f9630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x4f9634: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f9634u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f9638: 0x32820004  andi        $v0, $s4, 0x4
    ctx->pc = 0x4f9638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_4f963c:
    // 0x4f963c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F963Cu;
    {
        const bool branch_taken_0x4f963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F963Cu;
        // 0x4f9640: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f963c) {
            ctx->pc = 0x4F9650u;
            goto label_4f9650;
        }
    }
    ctx->pc = 0x4F9644u;
    // 0x4f9644: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f9644u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f9648: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x4f9648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x4f964c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f964cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f9650:
    // 0x4f9650: 0x32820800  andi        $v0, $s4, 0x800
    ctx->pc = 0x4f9650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2048);
    // 0x4f9654: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F9654u;
    {
        const bool branch_taken_0x4f9654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9654u;
        // 0x4f9658: 0x26c31280  addiu       $v1, $s6, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9654) {
            ctx->pc = 0x4F9668u;
            goto label_4f9668;
        }
    }
    ctx->pc = 0x4F965Cu;
    // 0x4f965c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f965cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f9660: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x4f9660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x4f9664: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f9664u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f9668:
    // 0x4f9668: 0x32a22000  andi        $v0, $s5, 0x2000
    ctx->pc = 0x4f9668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8192);
    // 0x4f966c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F966Cu;
    {
        const bool branch_taken_0x4f966c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F966Cu;
        // 0x4f9670: 0x26c31280  addiu       $v1, $s6, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f966c) {
            ctx->pc = 0x4F9684u;
            goto label_4f9684;
        }
    }
    ctx->pc = 0x4F9674u;
    // 0x4f9674: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x4f9674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x4f9678: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f9678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f967c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4f967cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4f9680: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f9680u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f9684:
    // 0x4f9684: 0x32a28000  andi        $v0, $s5, 0x8000
    ctx->pc = 0x4f9684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32768);
    // 0x4f9688: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F9688u;
    {
        const bool branch_taken_0x4f9688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9688u;
        // 0x4f968c: 0x26c31280  addiu       $v1, $s6, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9688) {
            ctx->pc = 0x4F96A0u;
            goto label_4f96a0;
        }
    }
    ctx->pc = 0x4F9690u;
    // 0x4f9690: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x4f9690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x4f9694: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f9694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f9698: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4f9698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4f969c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f969cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f96a0:
    // 0x4f96a0: 0x32a24000  andi        $v0, $s5, 0x4000
    ctx->pc = 0x4f96a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16384);
    // 0x4f96a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F96A4u;
    {
        const bool branch_taken_0x4f96a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F96A4u;
        // 0x4f96a8: 0x26c31280  addiu       $v1, $s6, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f96a4) {
            ctx->pc = 0x4F96BCu;
            goto label_4f96bc;
        }
    }
    ctx->pc = 0x4F96ACu;
    // 0x4f96ac: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x4f96acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x4f96b0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f96b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f96b4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4f96b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4f96b8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f96b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f96bc:
    // 0x4f96bc: 0x32a21000  andi        $v0, $s5, 0x1000
    ctx->pc = 0x4f96bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
    // 0x4f96c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F96C0u;
    {
        const bool branch_taken_0x4f96c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F96C0u;
        // 0x4f96c4: 0x26c31280  addiu       $v1, $s6, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f96c0) {
            ctx->pc = 0x4F96D8u;
            goto label_4f96d8;
        }
    }
    ctx->pc = 0x4F96C8u;
    // 0x4f96c8: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x4f96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x4f96cc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f96ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f96d0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4f96d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4f96d4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f96d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f96d8:
    // 0x4f96d8: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x4f96d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x4f96dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F96DCu;
    {
        const bool branch_taken_0x4f96dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F96DCu;
        // 0x4f96e0: 0x26c31280  addiu       $v1, $s6, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f96dc) {
            ctx->pc = 0x4F96F4u;
            goto label_4f96f4;
        }
    }
    ctx->pc = 0x4F96E4u;
    // 0x4f96e4: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x4f96e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x4f96e8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f96e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f96ec: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4f96ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x4f96f0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f96f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f96f4:
    // 0x4f96f4: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x4f96f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x4f96f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F96F8u;
    {
        const bool branch_taken_0x4f96f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F96F8u;
        // 0x4f96fc: 0x26c31280  addiu       $v1, $s6, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f96f8) {
            ctx->pc = 0x4F9710u;
            goto label_4f9710;
        }
    }
    ctx->pc = 0x4F9700u;
    // 0x4f9700: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x4f9700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x4f9704: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f9704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f9708: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4f9708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x4f970c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f970cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f9710:
    // 0x4f9710: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x4f9710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x4f9714: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F9714u;
    {
        const bool branch_taken_0x4f9714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9714u;
        // 0x4f9718: 0x26c31280  addiu       $v1, $s6, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9714) {
            ctx->pc = 0x4F972Cu;
            goto label_4f972c;
        }
    }
    ctx->pc = 0x4F971Cu;
    // 0x4f971c: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x4f971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x4f9720: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f9720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f9724: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4f9724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x4f9728: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f9728u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f972c:
    // 0x4f972c: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x4f972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
    // 0x4f9730: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F9730u;
    {
        const bool branch_taken_0x4f9730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9730u;
        // 0x4f9734: 0x26c31280  addiu       $v1, $s6, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9730) {
            ctx->pc = 0x4F9748u;
            goto label_4f9748;
        }
    }
    ctx->pc = 0x4F9738u;
    // 0x4f9738: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x4f9738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x4f973c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f973cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f9740: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4f9740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x4f9744: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f9744u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f9748:
    // 0x4f9748: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x4f9748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x4f974c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4f974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f9750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F9750u;
    {
        const bool branch_taken_0x4f9750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9750u;
        // 0x4f9754: 0x26c31280  addiu       $v1, $s6, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9750) {
            ctx->pc = 0x4F9768u;
            goto label_4f9768;
        }
    }
    ctx->pc = 0x4F9758u;
    // 0x4f9758: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x4f9758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x4f975c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f975cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f9760: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x4f9760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x4f9764: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f9764u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f9768:
    // 0x4f9768: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x4f9768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x4f976c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F976Cu;
    {
        const bool branch_taken_0x4f976c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F976Cu;
        // 0x4f9770: 0x26c31280  addiu       $v1, $s6, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f976c) {
            ctx->pc = 0x4F9784u;
            goto label_4f9784;
        }
    }
    ctx->pc = 0x4F9774u;
    // 0x4f9774: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x4f9774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4f9778: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f9778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f977c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x4f977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x4f9780: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f9780u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f9784:
    // 0x4f9784: 0x32a20800  andi        $v0, $s5, 0x800
    ctx->pc = 0x4f9784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2048);
    // 0x4f9788: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F9788u;
    {
        const bool branch_taken_0x4f9788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9788u;
        // 0x4f978c: 0x26c31280  addiu       $v1, $s6, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9788) {
            ctx->pc = 0x4F97A0u;
            goto label_4f97a0;
        }
    }
    ctx->pc = 0x4F9790u;
    // 0x4f9790: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x4f9790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x4f9794: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f9794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f9798: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x4f9798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x4f979c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f979cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f97a0:
    // 0x4f97a0: 0x32a20100  andi        $v0, $s5, 0x100
    ctx->pc = 0x4f97a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x4f97a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F97A4u;
    {
        const bool branch_taken_0x4f97a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F97A4u;
        // 0x4f97a8: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f97a4) {
            ctx->pc = 0x4F97B4u;
            goto label_4f97b4;
        }
    }
    ctx->pc = 0x4F97ACu;
    // 0x4f97ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f97acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f97b0: 0xac62cb1c  sw          $v0, -0x34E4($v1)
    ctx->pc = 0x4f97b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953756), GPR_U32(ctx, 2));
label_4f97b4:
    // 0x4f97b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4f97b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f97b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4f97b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f97bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4f97bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f97c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4f97c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f97c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4f97c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f97c8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4f97c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f97cc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4f97ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f97d0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4f97d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4f97d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F97D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F97D4u;
        // 0x4f97d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F97D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F97DCu;
    // 0x4f97dc: 0x0  nop
    ctx->pc = 0x4f97dcu;
    // NOP
    ctx->pc = 0x4f97e0u;
}
