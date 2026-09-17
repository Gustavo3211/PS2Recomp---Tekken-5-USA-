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

// Function: sub_00316E1C
// Address: 0x316e1c - 0x317734
void sub_00316E1C_0x316e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316E1C_0x316e1c");
#endif

    switch (ctx->pc) {
        case 0x316e58u: goto label_316e58;
        case 0x316e84u: goto label_316e84;
        case 0x316e90u: goto label_316e90;
        case 0x316eccu: goto label_316ecc;
        case 0x3170f4u: goto label_3170f4;
        case 0x31715cu: goto label_31715c;
        case 0x3171f4u: goto label_3171f4;
        case 0x317290u: goto label_317290;
        case 0x317380u: goto label_317380;
        case 0x317404u: goto label_317404;
        case 0x3174b8u: goto label_3174b8;
        case 0x3174bcu: goto label_3174bc;
        case 0x317514u: goto label_317514;
        case 0x31752cu: goto label_31752c;
        case 0x3175b8u: goto label_3175b8;
        case 0x3175d4u: goto label_3175d4;
        case 0x3175f0u: goto label_3175f0;
        case 0x31760cu: goto label_31760c;
        case 0x317628u: goto label_317628;
        case 0x31764cu: goto label_31764c;
        case 0x317660u: goto label_317660;
        case 0x317674u: goto label_317674;
        case 0x3176c0u: goto label_3176c0;
        default: break;
    }

    ctx->pc = 0x316e1cu;

    // 0x316e1c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x316e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x316e20: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x316e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x316e24: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x316e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x316e28: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316e28u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e2c: 0xafc4003c  sw          $a0, 0x3C($fp)
    ctx->pc = 0x316e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 4));
    // 0x316e30: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x316e30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x316e34: 0xafc60004  sw          $a2, 0x4($fp)
    ctx->pc = 0x316e34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
    // 0x316e38: 0xafc70008  sw          $a3, 0x8($fp)
    ctx->pc = 0x316e38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 7));
    // 0x316e3c: 0xafc8000c  sw          $t0, 0xC($fp)
    ctx->pc = 0x316e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 8));
    // 0x316e40: 0xafc90010  sw          $t1, 0x10($fp)
    ctx->pc = 0x316e40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 9));
    // 0x316e44: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x316e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316e48: 0x246240d4  addiu       $v0, $v1, 0x40D4
    ctx->pc = 0x316e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16596));
    // 0x316e4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x316e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e50: 0xc0dcd66  jal         func_373598
    ctx->pc = 0x316E50u;
    SET_GPR_U32(ctx, 31, 0x316E58u);
    ctx->pc = 0x373598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373598u, 0x316E50u, 0x316E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E58u;
label_316e58:
    // 0x316e58: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x316e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316e5c: 0x248240f8  addiu       $v0, $a0, 0x40F8
    ctx->pc = 0x316e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16632));
    // 0x316e60: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x316e60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x316e64: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x316e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x316e68: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x316e68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x316e6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x316e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x316e70: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x316e70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x316e74: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x316e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x316e78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x316e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x316e7c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x316E7Cu;
    {
        const bool branch_taken_0x316e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x316e7c) {
            ctx->pc = 0x316EB8u;
            goto label_316eb8;
        }
    }
    ctx->pc = 0x316E84u;
label_316e84:
    // 0x316e84: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x316e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x316e88: 0xc0dcd66  jal         func_373598
    ctx->pc = 0x316E88u;
    SET_GPR_U32(ctx, 31, 0x316E90u);
    ctx->pc = 0x373598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373598u, 0x316E88u, 0x316E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E90u;
label_316e90:
    // 0x316e90: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x316e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x316e94: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x316e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x316e98: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x316e98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x316e9c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x316e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x316ea0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x316ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316ea4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x316ea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ea8: 0xafc3001c  sw          $v1, 0x1C($fp)
    ctx->pc = 0x316ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 3));
    // 0x316eac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x316eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x316eb0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x316EB0u;
    {
        const bool branch_taken_0x316eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x316eb0) {
            ctx->pc = 0x316E84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316e84;
        }
    }
    ctx->pc = 0x316EB8u;
label_316eb8:
    // 0x316eb8: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x316eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316ebc: 0x24a243c4  addiu       $v0, $a1, 0x43C4
    ctx->pc = 0x316ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 17348));
    // 0x316ec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x316ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ec4: 0xc0dd0a8  jal         func_3742A0
    ctx->pc = 0x316EC4u;
    SET_GPR_U32(ctx, 31, 0x316ECCu);
    ctx->pc = 0x3742A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3742A0u, 0x316EC4u, 0x316ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316ECCu;
label_316ecc:
    // 0x316ecc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x316eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316ed0: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x316ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316ed4: 0x24c30048  addiu       $v1, $a2, 0x48
    ctx->pc = 0x316ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
    // 0x316ed8: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x316ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x316edc: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x316edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x316ee0: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x316ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x316ee4: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x316ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x316ee8: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x316ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x316eec: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x316eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x316ef0: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x316ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x316ef4: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x316ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x316ef8: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x316ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x316efc: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x316efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x316f00: 0xb0650017  sdl         $a1, 0x17($v1)
    ctx->pc = 0x316f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x316f04: 0xb4650010  sdr         $a1, 0x10($v1)
    ctx->pc = 0x316f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x316f08: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x316f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316f0c: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x316f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f10: 0xace20060  sw          $v0, 0x60($a3)
    ctx->pc = 0x316f10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 2));
    // 0x316f14: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x316f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x316f18: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x316f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f1c: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x316f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x316f20: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x316f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x316f24: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x316f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f28: 0xac820068  sw          $v0, 0x68($a0)
    ctx->pc = 0x316f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x316f2c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x316f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x316f30: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x316f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f34: 0xaca2006c  sw          $v0, 0x6C($a1)
    ctx->pc = 0x316f34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 2));
    // 0x316f38: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x316f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f3c: 0xacc00070  sw          $zero, 0x70($a2)
    ctx->pc = 0x316f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 0));
    // 0x316f40: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x316f40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f44: 0xace00074  sw          $zero, 0x74($a3)
    ctx->pc = 0x316f44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
    // 0x316f48: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x316f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f4c: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x316f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x316f50: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x316f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f54: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x316f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x316f58: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x316f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f5c: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x316f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x316f60: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x316f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f64: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x316f64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x316f68: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x316f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f6c: 0xacc0008c  sw          $zero, 0x8C($a2)
    ctx->pc = 0x316f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 0));
    // 0x316f70: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x316f70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f74: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x316f74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x316f78: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x316f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f7c: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x316f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
    // 0x316f80: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x316f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f84: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x316f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
    // 0x316f88: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x316f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f8c: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x316f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x316f90: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x316f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316f94: 0xaca000a0  sw          $zero, 0xA0($a1)
    ctx->pc = 0x316f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 0));
    // 0x316f98: 0x240244d0  addiu       $v0, $zero, 0x44D0
    ctx->pc = 0x316f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17616));
    // 0x316f9c: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x316f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x316fa0: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x316fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316fa4: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x316fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x316fa8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x316fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x316fac: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x316facu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x316fb0: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x316fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x316fb4: 0x2443007f  addiu       $v1, $v0, 0x7F
    ctx->pc = 0x316fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x316fb8: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x316fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x316fbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x316fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x316fc0: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x316fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x316fc4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x316fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x316fc8: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x316fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x316fcc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x316fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x316fd0: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x316fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x316fd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316fd8: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x316fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x316fdc: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x316fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316fe0: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x316fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x316fe4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x316fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x316fe8: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x316fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316fec: 0xacc240c0  sw          $v0, 0x40C0($a2)
    ctx->pc = 0x316fecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16576), GPR_U32(ctx, 2));
    // 0x316ff0: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x316ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316ff4: 0x8ce3004c  lw          $v1, 0x4C($a3)
    ctx->pc = 0x316ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x316ff8: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x316ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x316ffc: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x316ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x317000: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x317000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x317004: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x317004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317008: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x317008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31700c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x317010: 0x21fc3  sra         $v1, $v0, 31
    ctx->pc = 0x317010u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 31));
    // 0x317014: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x317014u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x317018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31701c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x31701cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x317020: 0x24422800  addiu       $v0, $v0, 0x2800
    ctx->pc = 0x317020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
    // 0x317024: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x317024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317028: 0xaca240c4  sw          $v0, 0x40C4($a1)
    ctx->pc = 0x317028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16580), GPR_U32(ctx, 2));
    // 0x31702c: 0x8fc6001c  lw          $a2, 0x1C($fp)
    ctx->pc = 0x31702cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x317030: 0xafc6004c  sw          $a2, 0x4C($fp)
    ctx->pc = 0x317030u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 76), GPR_U32(ctx, 6));
    // 0x317034: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x317034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317038: 0x8ce240c4  lw          $v0, 0x40C4($a3)
    ctx->pc = 0x317038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16580)));
    // 0x31703c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31703Cu;
    {
        const bool branch_taken_0x31703c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31703c) {
            ctx->pc = 0x317064u;
            goto label_317064;
        }
    }
    ctx->pc = 0x317044u;
    // 0x317044: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x317044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317048: 0x8c6240c4  lw          $v0, 0x40C4($v1)
    ctx->pc = 0x317048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16580)));
    // 0x31704c: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x31704cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x317050: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x317050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x317054: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x317054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x317058: 0x8fc4004c  lw          $a0, 0x4C($fp)
    ctx->pc = 0x317058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x31705c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x317060: 0xafc4004c  sw          $a0, 0x4C($fp)
    ctx->pc = 0x317060u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 76), GPR_U32(ctx, 4));
label_317064:
    // 0x317064: 0x8fc5004c  lw          $a1, 0x4C($fp)
    ctx->pc = 0x317064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x317068: 0xafc5001c  sw          $a1, 0x1C($fp)
    ctx->pc = 0x317068u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 5));
    // 0x31706c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x31706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x317070: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x317070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x317074: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x317078: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x317078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x31707c: 0xacc240c8  sw          $v0, 0x40C8($a2)
    ctx->pc = 0x31707cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16584), GPR_U32(ctx, 2));
    // 0x317080: 0x8fc7001c  lw          $a3, 0x1C($fp)
    ctx->pc = 0x317080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x317084: 0xafc70050  sw          $a3, 0x50($fp)
    ctx->pc = 0x317084u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 7));
    // 0x317088: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x317088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x31708c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x31708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x317090: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x317090u;
    {
        const bool branch_taken_0x317090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317090) {
            ctx->pc = 0x3170B8u;
            goto label_3170b8;
        }
    }
    ctx->pc = 0x317098u;
    // 0x317098: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x317098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x31709c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x31709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3170a0: 0x24430fff  addiu       $v1, $v0, 0xFFF
    ctx->pc = 0x3170a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x3170a4: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x3170a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x3170a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3170a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3170ac: 0x8fc50050  lw          $a1, 0x50($fp)
    ctx->pc = 0x3170acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x3170b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3170b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3170b4: 0xafc50050  sw          $a1, 0x50($fp)
    ctx->pc = 0x3170b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 5));
label_3170b8:
    // 0x3170b8: 0x8fc60050  lw          $a2, 0x50($fp)
    ctx->pc = 0x3170b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x3170bc: 0xafc6001c  sw          $a2, 0x1C($fp)
    ctx->pc = 0x3170bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 6));
    // 0x3170c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3170c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3170c4: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x3170c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3170c8: 0xace200b4  sw          $v0, 0xB4($a3)
    ctx->pc = 0x3170c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 180), GPR_U32(ctx, 2));
    // 0x3170cc: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x3170ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3170d0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x3170d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x3170d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3170d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3170d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3170D8u;
    {
        const bool branch_taken_0x3170d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3170d8) {
            ctx->pc = 0x3170F0u;
            goto label_3170f0;
        }
    }
    ctx->pc = 0x3170E0u;
    // 0x3170e0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3170e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3170e4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3170e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3170e8: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x3170e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3170ec: 0xac8200b4  sw          $v0, 0xB4($a0)
    ctx->pc = 0x3170ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
label_3170f0:
    // 0x3170f0: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x3170f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
label_3170f4:
    // 0x3170f4: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x3170f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x3170f8: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x3170f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3170fc: 0x8ca300b4  lw          $v1, 0xB4($a1)
    ctx->pc = 0x3170fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x317100: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x317100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x317104: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317104u;
    {
        const bool branch_taken_0x317104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317104) {
            ctx->pc = 0x317114u;
            goto label_317114;
        }
    }
    ctx->pc = 0x31710Cu;
    // 0x31710c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31710Cu;
    {
        const bool branch_taken_0x31710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31710c) {
            ctx->pc = 0x317170u;
            goto label_317170;
        }
    }
    ctx->pc = 0x317114u;
label_317114:
    // 0x317114: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x317114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317118: 0x8cc30068  lw          $v1, 0x68($a2)
    ctx->pc = 0x317118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x31711c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x31711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x317120: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x317120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x317124: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x317124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317128: 0x8ce3004c  lw          $v1, 0x4C($a3)
    ctx->pc = 0x317128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x31712c: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x31712cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317130: 0x8ca200b4  lw          $v0, 0xB4($a1)
    ctx->pc = 0x317130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x317134: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x317134u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x317138: 0x1812  mflo        $v1
    ctx->pc = 0x317138u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x31713c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31713Cu;
    {
        const bool branch_taken_0x31713c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31713c) {
            ctx->pc = 0x317140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31713Cu;
            // 0x317140: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317144u;
            goto label_317144;
        }
    }
    ctx->pc = 0x317144u;
label_317144:
    // 0x317144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317148: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x317148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31714c: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x31714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317150: 0x8c470050  lw          $a3, 0x50($v0)
    ctx->pc = 0x317150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x317154: 0xc0c8346  jal         func_320D18
    ctx->pc = 0x317154u;
    SET_GPR_U32(ctx, 31, 0x31715Cu);
    ctx->pc = 0x320D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320D18u, 0x317154u, 0x31715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31715Cu;
label_31715c:
    // 0x31715c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x31715cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x317160: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x317160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x317164: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x317164u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x317168: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x317168u;
    {
        const bool branch_taken_0x317168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317168) {
            ctx->pc = 0x3170F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3170f4;
        }
    }
    ctx->pc = 0x317170u;
label_317170:
    // 0x317170: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x317170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x317174: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x317174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x317178: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31717c: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x31717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317180: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x317180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x317184: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x317184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317188: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x317188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x31718c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31718cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x317190: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x317190u;
    {
        const bool branch_taken_0x317190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317190) {
            ctx->pc = 0x3171C4u;
            goto label_3171c4;
        }
    }
    ctx->pc = 0x317198u;
    // 0x317198: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x317198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x31719c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x31719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3171a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3171a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3171a4: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x3171a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x3171a8: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x3171a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x3171ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3171acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3171b0: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x3171b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x3171b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3171b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3171b8: 0xafc30054  sw          $v1, 0x54($fp)
    ctx->pc = 0x3171b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 3));
    // 0x3171bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3171BCu;
    {
        const bool branch_taken_0x3171bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3171bc) {
            ctx->pc = 0x3171CCu;
            goto label_3171cc;
        }
    }
    ctx->pc = 0x3171C4u;
label_3171c4:
    // 0x3171c4: 0x8fc4001c  lw          $a0, 0x1C($fp)
    ctx->pc = 0x3171c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x3171c8: 0xafc40054  sw          $a0, 0x54($fp)
    ctx->pc = 0x3171c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 4));
label_3171cc:
    // 0x3171cc: 0x8fc50054  lw          $a1, 0x54($fp)
    ctx->pc = 0x3171ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x3171d0: 0xafc5001c  sw          $a1, 0x1C($fp)
    ctx->pc = 0x3171d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 5));
    // 0x3171d4: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x3171d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3171d8: 0x8cc3004c  lw          $v1, 0x4C($a2)
    ctx->pc = 0x3171d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x3171dc: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x3171dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3171e0: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x3171e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3171e4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3171e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3171e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3171e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3171ec: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x3171ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x3171f0: 0xafc00024  sw          $zero, 0x24($fp)
    ctx->pc = 0x3171f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
label_3171f4:
    // 0x3171f4: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3171f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3171f8: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x3171f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3171fc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3171fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x317200: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x317200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x317204: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317204u;
    {
        const bool branch_taken_0x317204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317204) {
            ctx->pc = 0x317214u;
            goto label_317214;
        }
    }
    ctx->pc = 0x31720Cu;
    // 0x31720c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x31720Cu;
    {
        const bool branch_taken_0x31720c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31720c) {
            ctx->pc = 0x3172E8u;
            goto label_3172e8;
        }
    }
    ctx->pc = 0x317214u;
label_317214:
    // 0x317214: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x317214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x317218: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x317218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31721c: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x31721cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317220: 0x8ca200b0  lw          $v0, 0xB0($a1)
    ctx->pc = 0x317220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x317224: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x317224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x317228: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x317228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x31722c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x31722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x317230: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x317234: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x317234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x317238: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x317238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x31723c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31723cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x317240: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x317240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317244: 0x8cc200b0  lw          $v0, 0xB0($a2)
    ctx->pc = 0x317244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x317248: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x317248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31724c: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x31724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x317250: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x317250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317254: 0x8ce200b4  lw          $v0, 0xB4($a3)
    ctx->pc = 0x317254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x317258: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x317258u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31725c: 0x1812  mflo        $v1
    ctx->pc = 0x31725cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x317260: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x317260u;
    {
        const bool branch_taken_0x317260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317260) {
            ctx->pc = 0x317264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317260u;
            // 0x317264: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317268u;
            goto label_317268;
        }
    }
    ctx->pc = 0x317268u;
label_317268:
    // 0x317268: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x317268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x31726c: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x31726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x317270: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x317270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x317274: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x317274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317278: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x317278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x31727c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31727cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x317280: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x317280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x317284: 0x8fc50020  lw          $a1, 0x20($fp)
    ctx->pc = 0x317284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x317288: 0xc0c6791  jal         func_319E44
    ctx->pc = 0x317288u;
    SET_GPR_U32(ctx, 31, 0x317290u);
    ctx->pc = 0x319E44u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319E44u, 0x317288u, 0x317290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317290u;
label_317290:
    // 0x317290: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x317290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x317294: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x317294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x317298: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31729c: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x31729cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x3172a0: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3172a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3172a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3172a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3172a8: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x3172a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3172ac: 0x8ca200b0  lw          $v0, 0xB0($a1)
    ctx->pc = 0x3172acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x3172b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3172b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3172b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3172b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3172b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3172b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3172bc: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3172bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3172c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3172c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3172c4: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x3172c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3172c8: 0x8cc200b0  lw          $v0, 0xB0($a2)
    ctx->pc = 0x3172c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x3172cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3172ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3172d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3172d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3172d4: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3172d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3172d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3172d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3172dc: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x3172dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x3172e0: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
    ctx->pc = 0x3172E0u;
    {
        const bool branch_taken_0x3172e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3172e0) {
            ctx->pc = 0x3171F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3171f4;
        }
    }
    ctx->pc = 0x3172E8u;
label_3172e8:
    // 0x3172e8: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x3172e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3172ec: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x3172ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
    // 0x3172f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3172f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3172f4: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x3172f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3172f8: 0xac6200a8  sw          $v0, 0xA8($v1)
    ctx->pc = 0x3172f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 2));
    // 0x3172fc: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x3172fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317300: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x317300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x317304: 0xafc20058  sw          $v0, 0x58($fp)
    ctx->pc = 0x317304u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 88), GPR_U32(ctx, 2));
    // 0x317308: 0x8fc50058  lw          $a1, 0x58($fp)
    ctx->pc = 0x317308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x31730c: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31730Cu;
    {
        const bool branch_taken_0x31730c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x31730c) {
            ctx->pc = 0x317320u;
            goto label_317320;
        }
    }
    ctx->pc = 0x317314u;
    // 0x317314: 0x8fc60058  lw          $a2, 0x58($fp)
    ctx->pc = 0x317314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x317318: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x317318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x31731c: 0xafc60058  sw          $a2, 0x58($fp)
    ctx->pc = 0x31731cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 88), GPR_U32(ctx, 6));
label_317320:
    // 0x317320: 0x8fc70058  lw          $a3, 0x58($fp)
    ctx->pc = 0x317320u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x317324: 0x71903  sra         $v1, $a3, 4
    ctx->pc = 0x317324u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 4));
    // 0x317328: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x317328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x31732c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x31732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x317330: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x317330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x317334: 0xafc2005c  sw          $v0, 0x5C($fp)
    ctx->pc = 0x317334u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 92), GPR_U32(ctx, 2));
    // 0x317338: 0x8fc5005c  lw          $a1, 0x5C($fp)
    ctx->pc = 0x317338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x31733c: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31733Cu;
    {
        const bool branch_taken_0x31733c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x31733c) {
            ctx->pc = 0x317350u;
            goto label_317350;
        }
    }
    ctx->pc = 0x317344u;
    // 0x317344: 0x8fc6005c  lw          $a2, 0x5C($fp)
    ctx->pc = 0x317344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x317348: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x317348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x31734c: 0xafc6005c  sw          $a2, 0x5C($fp)
    ctx->pc = 0x31734cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 92), GPR_U32(ctx, 6));
label_317350:
    // 0x317350: 0x8fc7005c  lw          $a3, 0x5C($fp)
    ctx->pc = 0x317350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x317354: 0x71103  sra         $v0, $a3, 4
    ctx->pc = 0x317354u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
    // 0x317358: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x317358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x31735c: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x31735cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
    // 0x317360: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x317360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317364: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x317364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x317368: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x317368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31736c: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x31736cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317370: 0x8ca200b0  lw          $v0, 0xB0($a1)
    ctx->pc = 0x317370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x317374: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x317378: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x317378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x31737c: 0xafc00024  sw          $zero, 0x24($fp)
    ctx->pc = 0x31737cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
label_317380:
    // 0x317380: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x317380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x317384: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x317384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317388: 0x8cc300b4  lw          $v1, 0xB4($a2)
    ctx->pc = 0x317388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
    // 0x31738c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31738cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x317390: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317390u;
    {
        const bool branch_taken_0x317390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317390) {
            ctx->pc = 0x3173A0u;
            goto label_3173a0;
        }
    }
    ctx->pc = 0x317398u;
    // 0x317398: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x317398u;
    {
        const bool branch_taken_0x317398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317398) {
            ctx->pc = 0x317418u;
            goto label_317418;
        }
    }
    ctx->pc = 0x3173A0u;
label_3173a0:
    // 0x3173a0: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x3173a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3173a4: 0x8ce30068  lw          $v1, 0x68($a3)
    ctx->pc = 0x3173a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
    // 0x3173a8: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3173a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3173ac: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3173acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3173b0: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x3173b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3173b4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x3173b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x3173b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3173b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3173bc: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x3173bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3173c0: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x3173c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x3173c4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x3173c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3173c8: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x3173c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3173cc: 0x8cc200ac  lw          $v0, 0xAC($a2)
    ctx->pc = 0x3173ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
    // 0x3173d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3173d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3173d4: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x3173d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3173d8: 0x8ce200b0  lw          $v0, 0xB0($a3)
    ctx->pc = 0x3173d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x3173dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3173dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3173e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3173e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3173e4: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3173e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3173e8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3173e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3173ec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3173ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3173f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3173f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3173f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3173f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3173f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3173f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3173fc: 0xc0c8378  jal         func_320DE0
    ctx->pc = 0x3173FCu;
    SET_GPR_U32(ctx, 31, 0x317404u);
    ctx->pc = 0x320DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320DE0u, 0x3173FCu, 0x317404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317404u;
label_317404:
    // 0x317404: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x317404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x317408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x317408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31740c: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x31740cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x317410: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x317410u;
    {
        const bool branch_taken_0x317410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317410) {
            ctx->pc = 0x317380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317380;
        }
    }
    ctx->pc = 0x317418u;
label_317418:
    // 0x317418: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x317418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x31741c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x31741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x317420: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x317420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317424: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x317424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x317428: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x317428u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31742c: 0x1812  mflo        $v1
    ctx->pc = 0x31742cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x317430: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x317430u;
    {
        const bool branch_taken_0x317430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317430) {
            ctx->pc = 0x317434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317430u;
            // 0x317434: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317438u;
            goto label_317438;
        }
    }
    ctx->pc = 0x317438u;
label_317438:
    // 0x317438: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x317438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x31743c: 0xac4340cc  sw          $v1, 0x40CC($v0)
    ctx->pc = 0x31743cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16588), GPR_U32(ctx, 3));
    // 0x317440: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x317440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317444: 0x8c6240cc  lw          $v0, 0x40CC($v1)
    ctx->pc = 0x317444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16588)));
    // 0x317448: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x317448u;
    {
        const bool branch_taken_0x317448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317448) {
            ctx->pc = 0x31745Cu;
            goto label_31745c;
        }
    }
    ctx->pc = 0x317450u;
    // 0x317450: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x317450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x317454: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x317454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317458: 0xac8240cc  sw          $v0, 0x40CC($a0)
    ctx->pc = 0x317458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16588), GPR_U32(ctx, 2));
label_31745c:
    // 0x31745c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x31745cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x317460: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x317460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x317464: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x317468: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x317468u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x31746c: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x31746cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317470: 0x8ca340cc  lw          $v1, 0x40CC($a1)
    ctx->pc = 0x317470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16588)));
    // 0x317474: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x317474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317478: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x317478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31747c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x317480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x317484: 0xafc20028  sw          $v0, 0x28($fp)
    ctx->pc = 0x317484u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x317488: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x317488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x31748c: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x31748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x317490: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x317494: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x317494u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x317498: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x317498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x31749c: 0x24c240d4  addiu       $v0, $a2, 0x40D4
    ctx->pc = 0x31749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16596));
    // 0x3174a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3174a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3174a4: 0x8fc50024  lw          $a1, 0x24($fp)
    ctx->pc = 0x3174a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3174a8: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x3174a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3174ac: 0x8ce640cc  lw          $a2, 0x40CC($a3)
    ctx->pc = 0x3174acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16588)));
    // 0x3174b0: 0xc0dcd8d  jal         func_373634
    ctx->pc = 0x3174B0u;
    SET_GPR_U32(ctx, 31, 0x3174B8u);
    ctx->pc = 0x373634u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373634u, 0x3174B0u, 0x3174B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3174B8u;
label_3174b8:
    // 0x3174b8: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x3174b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 0));
label_3174bc:
    // 0x3174bc: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x3174bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x3174c0: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x3174c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3174c4: 0x8c8340cc  lw          $v1, 0x40CC($a0)
    ctx->pc = 0x3174c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16588)));
    // 0x3174c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3174c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3174cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3174CCu;
    {
        const bool branch_taken_0x3174cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3174cc) {
            ctx->pc = 0x3174DCu;
            goto label_3174dc;
        }
    }
    ctx->pc = 0x3174D4u;
    // 0x3174d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3174D4u;
    {
        const bool branch_taken_0x3174d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3174d4) {
            ctx->pc = 0x317528u;
            goto label_317528;
        }
    }
    ctx->pc = 0x3174DCu;
label_3174dc:
    // 0x3174dc: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x3174dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3174e0: 0x24a440d4  addiu       $a0, $a1, 0x40D4
    ctx->pc = 0x3174e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16596));
    // 0x3174e4: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x3174e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3174e8: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x3174e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x3174ec: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x3174ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x3174f0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3174f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3174f4: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x3174f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3174f8: 0x8ce240c8  lw          $v0, 0x40C8($a3)
    ctx->pc = 0x3174f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16584)));
    // 0x3174fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3174fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x317500: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x317500u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x317504: 0x27c20030  addiu       $v0, $fp, 0x30
    ctx->pc = 0x317504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    // 0x317508: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x317508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31750c: 0xc0dcdd5  jal         func_373754
    ctx->pc = 0x31750Cu;
    SET_GPR_U32(ctx, 31, 0x317514u);
    ctx->pc = 0x373754u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373754u, 0x31750Cu, 0x317514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317514u;
label_317514:
    // 0x317514: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x317514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x317518: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x317518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31751c: 0xafc2002c  sw          $v0, 0x2C($fp)
    ctx->pc = 0x31751cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x317520: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x317520u;
    {
        const bool branch_taken_0x317520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317520) {
            ctx->pc = 0x3174BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3174bc;
        }
    }
    ctx->pc = 0x317528u;
label_317528:
    // 0x317528: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x317528u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 0));
label_31752c:
    // 0x31752c: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x31752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x317530: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x317530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x317534: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317534u;
    {
        const bool branch_taken_0x317534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317534) {
            ctx->pc = 0x317544u;
            goto label_317544;
        }
    }
    ctx->pc = 0x31753Cu;
    // 0x31753c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x31753Cu;
    {
        const bool branch_taken_0x31753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31753c) {
            ctx->pc = 0x3175CCu;
            goto label_3175cc;
        }
    }
    ctx->pc = 0x317544u;
label_317544:
    // 0x317544: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x317544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x317548: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x317548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x31754c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31754cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x317550: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x317550u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x317554: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x317554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317558: 0x8c4340cc  lw          $v1, 0x40CC($v0)
    ctx->pc = 0x317558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16588)));
    // 0x31755c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x31755cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317560: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x317560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x317564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x317568: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31756c: 0xafc20038  sw          $v0, 0x38($fp)
    ctx->pc = 0x31756cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 2));
    // 0x317570: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x317570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x317574: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x317574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x317578: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31757c: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x31757cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x317580: 0x8fc3002c  lw          $v1, 0x2C($fp)
    ctx->pc = 0x317580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x317584: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x317584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317588: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x317588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31758c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x317590: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x317594: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x317594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317598: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31759c: 0x244240f8  addiu       $v0, $v0, 0x40F8
    ctx->pc = 0x31759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
    // 0x3175a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3175a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3175a4: 0x8fc50034  lw          $a1, 0x34($fp)
    ctx->pc = 0x3175a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x3175a8: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x3175a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3175ac: 0x8ce640cc  lw          $a2, 0x40CC($a3)
    ctx->pc = 0x3175acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16588)));
    // 0x3175b0: 0xc0dcd8d  jal         func_373634
    ctx->pc = 0x3175B0u;
    SET_GPR_U32(ctx, 31, 0x3175B8u);
    ctx->pc = 0x373634u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373634u, 0x3175B0u, 0x3175B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175B8u;
label_3175b8:
    // 0x3175b8: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x3175b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x3175bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3175bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3175c0: 0xafc2002c  sw          $v0, 0x2C($fp)
    ctx->pc = 0x3175c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x3175c4: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x3175C4u;
    {
        const bool branch_taken_0x3175c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3175c4) {
            ctx->pc = 0x31752Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31752c;
        }
    }
    ctx->pc = 0x3175CCu;
label_3175cc:
    // 0x3175cc: 0xc0410ca  jal         func_104328
    ctx->pc = 0x3175CCu;
    SET_GPR_U32(ctx, 31, 0x3175D4u);
    ctx->pc = 0x104328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104328u, 0x3175CCu, 0x3175D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175D4u;
label_3175d4:
    // 0x3175d4: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x3175d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3175d8: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x3175d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3175dc: 0x8c4540c0  lw          $a1, 0x40C0($v0)
    ctx->pc = 0x3175dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16576)));
    // 0x3175e0: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x3175e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3175e4: 0x8c6640c4  lw          $a2, 0x40C4($v1)
    ctx->pc = 0x3175e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16580)));
    // 0x3175e8: 0xc040de0  jal         func_103780
    ctx->pc = 0x3175E8u;
    SET_GPR_U32(ctx, 31, 0x3175F0u);
    ctx->pc = 0x103780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103780u, 0x3175E8u, 0x3175F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175F0u;
label_3175f0:
    // 0x3175f0: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x3175f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3175f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3175f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3175f8: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x3175f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x3175fc: 0x24c69d58  addiu       $a2, $a2, -0x62A8
    ctx->pc = 0x3175fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942040));
    // 0x317600: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x317600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317604: 0xc041166  jal         func_104598
    ctx->pc = 0x317604u;
    SET_GPR_U32(ctx, 31, 0x31760Cu);
    ctx->pc = 0x104598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104598u, 0x317604u, 0x31760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31760Cu;
label_31760c:
    // 0x31760c: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x31760cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317614: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x317614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x317618: 0x24c69da0  addiu       $a2, $a2, -0x6260
    ctx->pc = 0x317618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942112));
    // 0x31761c: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x31761cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317620: 0xc041166  jal         func_104598
    ctx->pc = 0x317620u;
    SET_GPR_U32(ctx, 31, 0x317628u);
    ctx->pc = 0x104598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104598u, 0x317620u, 0x317628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317628u;
label_317628:
    // 0x317628: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x317628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x31762c: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x31762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x317630: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x317630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x317634: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317634u;
    {
        const bool branch_taken_0x317634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317634) {
            ctx->pc = 0x31764Cu;
            goto label_31764c;
        }
    }
    ctx->pc = 0x31763Cu;
    // 0x31763c: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x31763cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317640: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x317640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317644: 0xc041174  jal         func_1045D0
    ctx->pc = 0x317644u;
    SET_GPR_U32(ctx, 31, 0x31764Cu);
    ctx->pc = 0x1045D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045D0u, 0x317644u, 0x31764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31764Cu;
label_31764c:
    // 0x31764c: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x31764cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x317650: 0x24849c98  addiu       $a0, $a0, -0x6368
    ctx->pc = 0x317650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941848));
    // 0x317654: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x317654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317658: 0xc0cc012  jal         func_330048
    ctx->pc = 0x317658u;
    SET_GPR_U32(ctx, 31, 0x317660u);
    ctx->pc = 0x330048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330048u, 0x317658u, 0x317660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317660u;
label_317660:
    // 0x317660: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x317660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x317664: 0x24849c58  addiu       $a0, $a0, -0x63A8
    ctx->pc = 0x317664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941784));
    // 0x317668: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x317668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x31766c: 0xc0cc01e  jal         func_330078
    ctx->pc = 0x31766Cu;
    SET_GPR_U32(ctx, 31, 0x317674u);
    ctx->pc = 0x330078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330078u, 0x31766Cu, 0x317674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317674u;
label_317674:
    // 0x317674: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x317674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317678: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x317678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x31767c: 0xaca2418c  sw          $v0, 0x418C($a1)
    ctx->pc = 0x31767cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16780), GPR_U32(ctx, 2));
    // 0x317680: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x317680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317684: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x317684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317688: 0xacc24188  sw          $v0, 0x4188($a2)
    ctx->pc = 0x317688u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16776), GPR_U32(ctx, 2));
    // 0x31768c: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x31768cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317690: 0xace04190  sw          $zero, 0x4190($a3)
    ctx->pc = 0x317690u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16784), GPR_U32(ctx, 0));
    // 0x317694: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x317694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317698: 0xac404194  sw          $zero, 0x4194($v0)
    ctx->pc = 0x317698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16788), GPR_U32(ctx, 0));
    // 0x31769c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3176a0: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x3176a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3176a4: 0xac62419c  sw          $v0, 0x419C($v1)
    ctx->pc = 0x3176a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16796), GPR_U32(ctx, 2));
    // 0x3176a8: 0x8fc4003c  lw          $a0, 0x3C($fp)
    ctx->pc = 0x3176a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3176ac: 0xac8040d0  sw          $zero, 0x40D0($a0)
    ctx->pc = 0x3176acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16592), GPR_U32(ctx, 0));
    // 0x3176b0: 0x8fc5003c  lw          $a1, 0x3C($fp)
    ctx->pc = 0x3176b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3176b4: 0xaca042ac  sw          $zero, 0x42AC($a1)
    ctx->pc = 0x3176b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 17068), GPR_U32(ctx, 0));
    // 0x3176b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3176b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3176bc: 0xafc20038  sw          $v0, 0x38($fp)
    ctx->pc = 0x3176bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 2));
label_3176c0:
    // 0x3176c0: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x3176c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x3176c4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x3176c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3176c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3176C8u;
    {
        const bool branch_taken_0x3176c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3176c8) {
            ctx->pc = 0x3176D8u;
            goto label_3176d8;
        }
    }
    ctx->pc = 0x3176D0u;
    // 0x3176d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3176D0u;
    {
        const bool branch_taken_0x3176d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3176d0) {
            ctx->pc = 0x317704u;
            goto label_317704;
        }
    }
    ctx->pc = 0x3176D8u;
label_3176d8:
    // 0x3176d8: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x3176d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x3176dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3176dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3176e0: 0x244243b0  addiu       $v0, $v0, 0x43B0
    ctx->pc = 0x3176e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
    // 0x3176e4: 0x8fc6003c  lw          $a2, 0x3C($fp)
    ctx->pc = 0x3176e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x3176e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3176e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3176ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3176ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3176f0: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x3176f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x3176f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3176f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3176f8: 0xafc20038  sw          $v0, 0x38($fp)
    ctx->pc = 0x3176f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 2));
    // 0x3176fc: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x3176FCu;
    {
        const bool branch_taken_0x3176fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3176fc) {
            ctx->pc = 0x3176C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3176c0;
        }
    }
    ctx->pc = 0x317704u;
label_317704:
    // 0x317704: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x317704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317708: 0x8fc7003c  lw          $a3, 0x3C($fp)
    ctx->pc = 0x317708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x31770c: 0xace243c0  sw          $v0, 0x43C0($a3)
    ctx->pc = 0x31770cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 17344), GPR_U32(ctx, 2));
    // 0x317710: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x317710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317714: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x317714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x317718: 0xac6243c4  sw          $v0, 0x43C4($v1)
    ctx->pc = 0x317718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17348), GPR_U32(ctx, 2));
    // 0x31771c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31771cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317720: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x317720u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x317724: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x317724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x317728: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x317728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31772c: 0x3e00008  jr          $ra
    ctx->pc = 0x31772Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31772Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317734u;
}
