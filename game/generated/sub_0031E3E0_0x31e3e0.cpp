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

// Function: sub_0031E3E0
// Address: 0x31e3e0 - 0x31e458
void sub_0031E3E0_0x31e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E3E0_0x31e3e0");
#endif

    switch (ctx->pc) {
        case 0x31e428u: goto label_31e428;
        default: break;
    }

    ctx->pc = 0x31e3e0u;

    // 0x31e3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31e3e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x31e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x31e3e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31e3ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31e3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e3f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x31e3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e3f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e3f8: 0x24421a00  addiu       $v0, $v0, 0x1A00
    ctx->pc = 0x31e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6656));
    // 0x31e3fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31e400: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31e404: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x31e404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x31e408: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x31e408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x31e40c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e410: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x31e410u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x31e414: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31e414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31e418: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x31e418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x31e41c: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x31e41cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x31e420: 0xc0cf248  jal         func_33C920
    ctx->pc = 0x31E420u;
    SET_GPR_U32(ctx, 31, 0x31E428u);
    ctx->pc = 0x31E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E420u;
    // 0x31e424: 0xa6000008  sh          $zero, 0x8($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C920u, 0x31E420u, 0x31E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E428u;
label_31e428:
    // 0x31e428: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x31e428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x31e42c: 0x24631918  addiu       $v1, $v1, 0x1918
    ctx->pc = 0x31e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6424));
    // 0x31e430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e434: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x31e434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x31e438: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31e438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e43c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e43cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31e440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e44c: 0x80cf1da  j           func_33C768
    ctx->pc = 0x31E44Cu;
    ctx->pc = 0x31E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E44Cu;
    // 0x31e450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C768u;
    sub_0033C768_0x33c768(rdram, ctx, runtime); return;
    ctx->pc = 0x31E454u;
    // 0x31e454: 0x0  nop
    ctx->pc = 0x31e454u;
    // NOP
    ctx->pc = 0x31e458u;
}
