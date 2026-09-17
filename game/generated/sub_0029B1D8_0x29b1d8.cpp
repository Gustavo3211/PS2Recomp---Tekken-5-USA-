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

// Function: sub_0029B1D8
// Address: 0x29b1d8 - 0x29b458
void sub_0029B1D8_0x29b1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B1D8_0x29b1d8");
#endif

    switch (ctx->pc) {
        case 0x29b244u: goto label_29b244;
        case 0x29b264u: goto label_29b264;
        case 0x29b268u: goto label_29b268;
        case 0x29b2d0u: goto label_29b2d0;
        case 0x29b2e0u: goto label_29b2e0;
        case 0x29b340u: goto label_29b340;
        case 0x29b344u: goto label_29b344;
        case 0x29b354u: goto label_29b354;
        case 0x29b368u: goto label_29b368;
        case 0x29b36cu: goto label_29b36c;
        case 0x29b384u: goto label_29b384;
        case 0x29b398u: goto label_29b398;
        case 0x29b41cu: goto label_29b41c;
        case 0x29b424u: goto label_29b424;
        default: break;
    }

    ctx->pc = 0x29b1d8u;

    // 0x29b1d8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x29b1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x29b1dc: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x29b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x29b1e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29b1e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1e4: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x29b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x29b1e8: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x29b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x29b1ec: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x29b1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x29b1f0: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x29b1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x29b1f4: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x29b1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x29b1f8: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x29b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x29b1fc: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x29b1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x29b200: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x29b200u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x29b204: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x29b204u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x29b208: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x29b208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x29b20c: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x29b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x29b210: 0x50400085  beql        $v0, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x29B210u;
    {
        const bool branch_taken_0x29b210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b210) {
            ctx->pc = 0x29B214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B210u;
            // 0x29b214: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B428u;
            goto label_29b428;
        }
    }
    ctx->pc = 0x29B218u;
    // 0x29b218: 0x8e42015c  lw          $v0, 0x15C($s2)
    ctx->pc = 0x29b218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x29b21c: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x29B21Cu;
    {
        const bool branch_taken_0x29b21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B21Cu;
        // 0x29b220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b21c) {
            ctx->pc = 0x29B424u;
            goto label_29b424;
        }
    }
    ctx->pc = 0x29B224u;
    // 0x29b224: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x29b224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x29b228: 0x240400f5  addiu       $a0, $zero, 0xF5
    ctx->pc = 0x29b228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x29b22c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29b22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29b230: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x29b230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x29b234: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x29b234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x29b238: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29b238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b23c: 0xc0c8328  jal         func_320CA0
    ctx->pc = 0x29B23Cu;
    SET_GPR_U32(ctx, 31, 0x29B244u);
    ctx->pc = 0x29B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B23Cu;
    // 0x29b240: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320CA0u, 0x29B23Cu, 0x29B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B244u;
label_29b244:
    // 0x29b244: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x29b244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29b248: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x29b248u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b24c: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x29b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x29b250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b258: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x29b258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29b25c: 0xc04a151  jal         func_128544
    ctx->pc = 0x29B25Cu;
    SET_GPR_U32(ctx, 31, 0x29B264u);
    ctx->pc = 0x29B260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B25Cu;
    // 0x29b260: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x29B25Cu, 0x29B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B264u;
label_29b264:
    // 0x29b264: 0xc7809048  lwc1        $f0, -0x6FB8($gp)
    ctx->pc = 0x29b264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29b268:
    // 0x29b268: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x29b268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x29b26c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x29b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29b270: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29b270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29b274: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29b274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29b278: 0x2a640004  slti        $a0, $s3, 0x4
    ctx->pc = 0x29b278u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29b27c: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x29b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x29b280: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29b284: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x29b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x29b288: 0x6a050007  ldl         $a1, 0x7($s0)
    ctx->pc = 0x29b288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x29b28c: 0x6e050000  ldr         $a1, 0x0($s0)
    ctx->pc = 0x29b28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x29b290: 0x6a06000f  ldl         $a2, 0xF($s0)
    ctx->pc = 0x29b290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x29b294: 0x6e060008  ldr         $a2, 0x8($s0)
    ctx->pc = 0x29b294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x29b298: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x29b298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29b29c: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x29b29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29b2a0: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x29b2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29b2a4: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x29b2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29b2a8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29b2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x29b2ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x29b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x29b2b0: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x29B2B0u;
    {
        const bool branch_taken_0x29b2b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B2B0u;
        // 0x29b2b4: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2b0) {
            ctx->pc = 0x29B268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b268;
        }
    }
    ctx->pc = 0x29B2B8u;
    // 0x29b2b8: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x29b2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29b2bc: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x29B2BCu;
    {
        const bool branch_taken_0x29b2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B2BCu;
        // 0x29b2c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2bc) {
            ctx->pc = 0x29B410u;
            goto label_29b410;
        }
    }
    ctx->pc = 0x29B2C4u;
    // 0x29b2c4: 0xc4750000  lwc1        $f21, 0x0($v1)
    ctx->pc = 0x29b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29b2c8: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x29b2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29b2cc: 0x0  nop
    ctx->pc = 0x29b2ccu;
    // NOP
label_29b2d0:
    // 0x29b2d0: 0x6200048  bltz        $s1, . + 4 + (0x48 << 2)
    ctx->pc = 0x29B2D0u;
    {
        const bool branch_taken_0x29b2d0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x29B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B2D0u;
        // 0x29b2d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2d0) {
            ctx->pc = 0x29B3F4u;
            goto label_29b3f4;
        }
    }
    ctx->pc = 0x29B2D8u;
    // 0x29b2d8: 0xc0a74ce  jal         func_29D338
    ctx->pc = 0x29B2D8u;
    SET_GPR_U32(ctx, 31, 0x29B2E0u);
    ctx->pc = 0x29B2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B2D8u;
    // 0x29b2dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D338u, 0x29B2D8u, 0x29B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B2E0u;
label_29b2e0:
    // 0x29b2e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29b2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29b2e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29b2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b2e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29b2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29b2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b2f0: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x29B2F0u;
    {
        const bool branch_taken_0x29b2f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B2F0u;
        // 0x29b2f4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2f0) {
            ctx->pc = 0x29B360u;
            goto label_29b360;
        }
    }
    ctx->pc = 0x29B2F8u;
    // 0x29b2f8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x29b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x29b2fc: 0x8e440150  lw          $a0, 0x150($s2)
    ctx->pc = 0x29b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x29b300: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x29b300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29b304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29b304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29b308: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29b30c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x29b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29b310: 0x14650016  bne         $v1, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x29B310u;
    {
        const bool branch_taken_0x29b310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x29B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B310u;
        // 0x29b314: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b310) {
            ctx->pc = 0x29B36Cu;
            goto label_29b36c;
        }
    }
    ctx->pc = 0x29B318u;
    // 0x29b318: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x29b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x29b31c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29B31Cu;
    {
        const bool branch_taken_0x29b31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b31c) {
            ctx->pc = 0x29B320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B31Cu;
            // 0x29b320: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B340u;
            goto label_29b340;
        }
    }
    ctx->pc = 0x29B324u;
    // 0x29b324: 0x56700006  bnel        $s3, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B324u;
    {
        const bool branch_taken_0x29b324 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x29b324) {
            ctx->pc = 0x29B328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B324u;
            // 0x29b328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B340u;
            goto label_29b340;
        }
    }
    ctx->pc = 0x29B32Cu;
    // 0x29b32c: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x29b32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b330: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x29b330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b334: 0x4503002f  bc1tl       . + 4 + (0x2F << 2)
    ctx->pc = 0x29B334u;
    {
        const bool branch_taken_0x29b334 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b334) {
            ctx->pc = 0x29B338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B334u;
            // 0x29b338: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B3F4u;
            goto label_29b3f4;
        }
    }
    ctx->pc = 0x29B33Cu;
    // 0x29b33c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29b33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29b340:
    // 0x29b340: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29b340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29b344:
    // 0x29b344: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29b344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b348: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29b348u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29b34c: 0xc0a6d16  jal         func_29B458
    ctx->pc = 0x29B34Cu;
    SET_GPR_U32(ctx, 31, 0x29B354u);
    ctx->pc = 0x29B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B34Cu;
    // 0x29b350: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B458u, 0x29B34Cu, 0x29B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B354u;
label_29b354:
    // 0x29b354: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29B354u;
    {
        const bool branch_taken_0x29b354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B354u;
        // 0x29b358: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b354) {
            ctx->pc = 0x29B388u;
            goto label_29b388;
        }
    }
    ctx->pc = 0x29B35Cu;
    // 0x29b35c: 0x0  nop
    ctx->pc = 0x29b35cu;
    // NOP
label_29b360:
    // 0x29b360: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B360u;
    {
        const bool branch_taken_0x29b360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B360u;
        // 0x29b364: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b360) {
            ctx->pc = 0x29B36Cu;
            goto label_29b36c;
        }
    }
    ctx->pc = 0x29B368u;
label_29b368:
    // 0x29b368: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x29b368u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_29b36c:
    // 0x29b36c: 0x1270000a  beq         $s3, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x29B36Cu;
    {
        const bool branch_taken_0x29b36c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x29B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B36Cu;
        // 0x29b370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b36c) {
            ctx->pc = 0x29B398u;
            goto label_29b398;
        }
    }
    ctx->pc = 0x29B374u;
    // 0x29b374: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29b374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b378: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29b378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b37c: 0xc0a6d92  jal         func_29B648
    ctx->pc = 0x29B37Cu;
    SET_GPR_U32(ctx, 31, 0x29B384u);
    ctx->pc = 0x29B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B37Cu;
    // 0x29b380: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B648u, 0x29B37Cu, 0x29B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B384u;
label_29b384:
    // 0x29b384: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29b384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29b388:
    // 0x29b388: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x29b388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29b38c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x29b38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b390: 0xc0c96f2  jal         func_325BC8
    ctx->pc = 0x29B390u;
    SET_GPR_U32(ctx, 31, 0x29B398u);
    ctx->pc = 0x29B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B390u;
    // 0x29b394: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325BC8u, 0x29B390u, 0x29B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B398u;
label_29b398:
    // 0x29b398: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x29b398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29b39c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29B39Cu;
    {
        const bool branch_taken_0x29b39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B39Cu;
        // 0x29b3a0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b39c) {
            ctx->pc = 0x29B3F0u;
            goto label_29b3f0;
        }
    }
    ctx->pc = 0x29B3A4u;
    // 0x29b3a4: 0x1220fff0  beqz        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29B3A4u;
    {
        const bool branch_taken_0x29b3a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3A4u;
        // 0x29b3a8: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3a4) {
            ctx->pc = 0x29B368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b368;
        }
    }
    ctx->pc = 0x29B3ACu;
    // 0x29b3ac: 0x8e450150  lw          $a1, 0x150($s2)
    ctx->pc = 0x29b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x29b3b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x29b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29b3b4: 0x26a40001  addiu       $a0, $s5, 0x1
    ctx->pc = 0x29b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x29b3b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29b3bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29b3c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x29b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29b3c4: 0x1464ffe9  bne         $v1, $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x29B3C4u;
    {
        const bool branch_taken_0x29b3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3C4u;
        // 0x29b3c8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3c4) {
            ctx->pc = 0x29B36Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b36c;
        }
    }
    ctx->pc = 0x29B3CCu;
    // 0x29b3cc: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x29b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x29b3d0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x29B3D0u;
    {
        const bool branch_taken_0x29b3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3D0u;
        // 0x29b3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3d0) {
            ctx->pc = 0x29B340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b340;
        }
    }
    ctx->pc = 0x29B3D8u;
    // 0x29b3d8: 0x1670ffd9  bne         $s3, $s0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x29B3D8u;
    {
        const bool branch_taken_0x29b3d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x29b3d8) {
            ctx->pc = 0x29B340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b340;
        }
    }
    ctx->pc = 0x29B3E0u;
    // 0x29b3e0: 0xc4a000d4  lwc1        $f0, 0xD4($a1)
    ctx->pc = 0x29b3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b3e4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x29b3e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b3e8: 0x4500ffd6  bc1f        . + 4 + (-0x2A << 2)
    ctx->pc = 0x29B3E8u;
    {
        const bool branch_taken_0x29b3e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3E8u;
        // 0x29b3ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3e8) {
            ctx->pc = 0x29B344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b344;
        }
    }
    ctx->pc = 0x29B3F0u;
label_29b3f0:
    // 0x29b3f0: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x29b3f0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_29b3f4:
    // 0x29b3f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29b3f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29b3f8: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x29b3f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x29b3fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B3FCu;
    {
        const bool branch_taken_0x29b3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B3FCu;
        // 0x29b400: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3fc) {
            ctx->pc = 0x29B410u;
            goto label_29b410;
        }
    }
    ctx->pc = 0x29B404u;
    // 0x29b404: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x29b404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29b408: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x29B408u;
    {
        const bool branch_taken_0x29b408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b408) {
            ctx->pc = 0x29B2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b2d0;
        }
    }
    ctx->pc = 0x29B410u;
label_29b410:
    // 0x29b410: 0x8e500130  lw          $s0, 0x130($s2)
    ctx->pc = 0x29b410u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x29b414: 0xc0ad4d2  jal         func_2B5348
    ctx->pc = 0x29B414u;
    SET_GPR_U32(ctx, 31, 0x29B41Cu);
    ctx->pc = 0x29B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B414u;
    // 0x29b418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5348u, 0x29B414u, 0x29B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B41Cu;
label_29b41c:
    // 0x29b41c: 0xc0ad526  jal         func_2B5498
    ctx->pc = 0x29B41Cu;
    SET_GPR_U32(ctx, 31, 0x29B424u);
    ctx->pc = 0x29B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B41Cu;
    // 0x29b420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5498u, 0x29B41Cu, 0x29B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B424u;
label_29b424:
    // 0x29b424: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x29b424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_29b428:
    // 0x29b428: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x29b428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29b42c: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x29b42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29b430: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x29b430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x29b434: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x29b434u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29b438: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x29b438u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x29b43c: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x29b43cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29b440: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x29b440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x29b444: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x29b444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29b448: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x29b448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29b44c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x29b44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29b450: 0x3e00008  jr          $ra
    ctx->pc = 0x29B450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B450u;
        // 0x29b454: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B458u;
}
