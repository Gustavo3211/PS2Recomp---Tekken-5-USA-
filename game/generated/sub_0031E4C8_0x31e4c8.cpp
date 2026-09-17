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

// Function: sub_0031E4C8
// Address: 0x31e4c8 - 0x31e538
void sub_0031E4C8_0x31e4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E4C8_0x31e4c8");
#endif

    switch (ctx->pc) {
        case 0x31e508u: goto label_31e508;
        default: break;
    }

    ctx->pc = 0x31e4c8u;

    // 0x31e4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31e4cc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x31e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x31e4d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31e4d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31e4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e4d8: 0x24421a00  addiu       $v0, $v0, 0x1A00
    ctx->pc = 0x31e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6656));
    // 0x31e4dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31e4e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31e4e4: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x31e4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x31e4e8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31e4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31e4ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e4f0: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x31e4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x31e4f4: 0xa6070006  sh          $a3, 0x6($s0)
    ctx->pc = 0x31e4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x31e4f8: 0xa6080008  sh          $t0, 0x8($s0)
    ctx->pc = 0x31e4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x31e4fc: 0xa609000a  sh          $t1, 0xA($s0)
    ctx->pc = 0x31e4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 9));
    // 0x31e500: 0xc0cf248  jal         func_33C920
    ctx->pc = 0x31E500u;
    SET_GPR_U32(ctx, 31, 0x31E508u);
    ctx->pc = 0x31E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E500u;
    // 0x31e504: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C920u, 0x31E500u, 0x31E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E508u;
label_31e508:
    // 0x31e508: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x31e508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x31e50c: 0x24631918  addiu       $v1, $v1, 0x1918
    ctx->pc = 0x31e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6424));
    // 0x31e510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e514: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x31e514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x31e518: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31e518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e51c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e51cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31e520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e528: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e52c: 0x80cf1da  j           func_33C768
    ctx->pc = 0x31E52Cu;
    ctx->pc = 0x31E530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E52Cu;
    // 0x31e530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C768u;
    sub_0033C768_0x33c768(rdram, ctx, runtime); return;
    ctx->pc = 0x31E534u;
    // 0x31e534: 0x0  nop
    ctx->pc = 0x31e534u;
    // NOP
    ctx->pc = 0x31e538u;
}
