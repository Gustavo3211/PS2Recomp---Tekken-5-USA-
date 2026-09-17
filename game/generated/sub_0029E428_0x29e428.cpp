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

// Function: sub_0029E428
// Address: 0x29e428 - 0x29e4a8
void sub_0029E428_0x29e428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E428_0x29e428");
#endif

    switch (ctx->pc) {
        case 0x29e454u: goto label_29e454;
        case 0x29e49cu: goto label_29e49c;
        default: break;
    }

    ctx->pc = 0x29e428u;

    // 0x29e428: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29e428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29e42c: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x29e42cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x29e430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29e434: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29e434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e438: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x29e438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x29e43c: 0x2484c118  addiu       $a0, $a0, -0x3EE8
    ctx->pc = 0x29e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951192));
    // 0x29e440: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29e440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29e444: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29e444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29e448: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29e448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29e44c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29E44Cu;
    SET_GPR_U32(ctx, 31, 0x29E454u);
    ctx->pc = 0x29E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E44Cu;
    // 0x29e450: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29E44Cu, 0x29E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E454u;
label_29e454:
    // 0x29e454: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x29e454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x29e458: 0x24463f30  addiu       $a2, $v0, 0x3F30
    ctx->pc = 0x29e458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16176));
    // 0x29e45c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x29e45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x29e460: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x29e460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x29e464: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x29e464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29e468: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x29e468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29e46c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x29e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x29e470: 0x906483ed  lbu         $a0, -0x7C13($v1)
    ctx->pc = 0x29e470u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3A83EDu));
    // 0x29e474: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x29e474u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x29e478: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x29e478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x29e47c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x29e47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x29e480: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x29e480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29e484: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x29e484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29e488: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29e488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e48c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x29e48cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x29e490: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x29e490u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e494: 0xc0a6480  jal         func_299200
    ctx->pc = 0x29E494u;
    SET_GPR_U32(ctx, 31, 0x29E49Cu);
    ctx->pc = 0x29E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E494u;
    // 0x29e498: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299200u, 0x29E494u, 0x29E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E49Cu;
label_29e49c:
    // 0x29e49c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29e49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4A0u;
        // 0x29e4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E4A8u;
}
