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

// Function: sub_0048B318
// Address: 0x48b318 - 0x48b390
void sub_0048B318_0x48b318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B318_0x48b318");
#endif

    switch (ctx->pc) {
        case 0x48b358u: goto label_48b358;
        case 0x48b364u: goto label_48b364;
        case 0x48b374u: goto label_48b374;
        default: break;
    }

    ctx->pc = 0x48b318u;

    // 0x48b318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48b31c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x48b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48b320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48b320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48b324: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x48b324u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x48b328: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x48b328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x48b32c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48b32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48b330: 0xa60200aa  sh          $v0, 0xAA($s0)
    ctx->pc = 0x48b330u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D72Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D72Au, _value); } while (0);
    // 0x48b334: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x48b334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x48b338: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x48b338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x48b33c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x48b33cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x72D688u));
    // 0x48b340: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x48b340u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72D688u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D688u, _value); } while (0);
    // 0x48b344: 0xa604226c  sh          $a0, 0x226C($s0)
    ctx->pc = 0x48b344u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72F8ECu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F8ECu, _value); } while (0);
    // 0x48b348: 0xa60000a8  sh          $zero, 0xA8($s0)
    ctx->pc = 0x48b348u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D728u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D728u, _value); } while (0);
    // 0x48b34c: 0xa600220e  sh          $zero, 0x220E($s0)
    ctx->pc = 0x48b34cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F88Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F88Eu, _value); } while (0);
    // 0x48b350: 0xc124c72  jal         func_4931C8
    ctx->pc = 0x48B350u;
    SET_GPR_U32(ctx, 31, 0x48B358u);
    ctx->pc = 0x48B354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B350u;
    // 0x48b354: 0xa60021fe  sh          $zero, 0x21FE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8702), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4931C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931C8u, 0x48B350u, 0x48B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B358u;
label_48b358:
    // 0x48b358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48b35c: 0xc124620  jal         func_491880
    ctx->pc = 0x48B35Cu;
    SET_GPR_U32(ctx, 31, 0x48B364u);
    ctx->pc = 0x48B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B35Cu;
    // 0x48b360: 0xa6022210  sh          $v0, 0x2210($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8720), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x48B35Cu, 0x48B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B364u;
label_48b364:
    // 0x48b364: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48b364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48b368: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48b368u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48b36c: 0xc124620  jal         func_491880
    ctx->pc = 0x48B36Cu;
    SET_GPR_U32(ctx, 31, 0x48B374u);
    ctx->pc = 0x48B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B36Cu;
    // 0x48b370: 0xa420e818  sh          $zero, -0x17E8($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961176), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x48B36Cu, 0x48B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B374u;
label_48b374:
    // 0x48b374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48b374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48b378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b37c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48b37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48b380: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48b380u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48b384: 0xa420e820  sh          $zero, -0x17E0($at)
    ctx->pc = 0x48b384u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 0));
    // 0x48b388: 0x8123228  j           func_48C8A0
    ctx->pc = 0x48B388u;
    ctx->pc = 0x48B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B388u;
    // 0x48b38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C8A0u;
    sub_0048C8A0_0x48c8a0(rdram, ctx, runtime); return;
    ctx->pc = 0x48B390u;
}
