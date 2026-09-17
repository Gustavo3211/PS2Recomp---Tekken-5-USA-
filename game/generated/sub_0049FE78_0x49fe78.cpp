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

// Function: sub_0049FE78
// Address: 0x49fe78 - 0x49fed8
void sub_0049FE78_0x49fe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FE78_0x49fe78");
#endif

    ctx->pc = 0x49fe78u;

    // 0x49fe78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49fe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49fe7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x49fe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x49fe80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49fe80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49fe84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49fe84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fe88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49fe88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fe8c: 0x8125e98  j           func_497A60
    ctx->pc = 0x49FE8Cu;
    ctx->pc = 0x49FE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FE8Cu;
    // 0x49fe90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x497A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497A60u, 0x49FE8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49FE94u;
    // 0x49fe94: 0x0  nop
    ctx->pc = 0x49fe94u;
    // NOP
    // 0x49fe98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49fe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49fe9c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49fea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49fea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49fea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49fea8: 0xa462d716  sh          $v0, -0x28EA($v1)
    ctx->pc = 0x49fea8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D716u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D716u, _value); } while (0);
    // 0x49feac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49feacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49feb0: 0x8122cc6  j           func_48B318
    ctx->pc = 0x49FEB0u;
    ctx->pc = 0x49FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FEB0u;
    // 0x49feb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B318u;
    sub_0048B318_0x48b318(rdram, ctx, runtime); return;
    ctx->pc = 0x49FEB8u;
    // 0x49feb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49feb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49febc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49febcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49fec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49fec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49fec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49fec8: 0xa462d716  sh          $v0, -0x28EA($v1)
    ctx->pc = 0x49fec8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D716u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D716u, _value); } while (0);
    // 0x49fecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49feccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fed0: 0x8122cc6  j           func_48B318
    ctx->pc = 0x49FED0u;
    ctx->pc = 0x49FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FED0u;
    // 0x49fed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B318u;
    sub_0048B318_0x48b318(rdram, ctx, runtime); return;
    ctx->pc = 0x49FED8u;
}
