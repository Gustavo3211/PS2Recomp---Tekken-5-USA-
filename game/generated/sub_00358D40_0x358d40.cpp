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

// Function: sub_00358D40
// Address: 0x358d40 - 0x358df8
void sub_00358D40_0x358d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358D40_0x358d40");
#endif

    ctx->pc = 0x358d40u;

    // 0x358d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358d44: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x358d44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x358d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358d4c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x358d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x358d50: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x358d50u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x358d54: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x358d54u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x358d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358d5c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x358d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x358d60: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x358d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x358d64: 0x80d8388  j           func_360E20
    ctx->pc = 0x358D64u;
    ctx->pc = 0x358D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D64u;
    // 0x358d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360E20u, 0x358D64u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358D6Cu;
    // 0x358d6c: 0x0  nop
    ctx->pc = 0x358d6cu;
    // NOP
    // 0x358d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358d74: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x358d74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x358d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358d7c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x358d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x358d80: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x358d80u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x358d84: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x358d84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x358d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358d8c: 0x80d8396  j           func_360E58
    ctx->pc = 0x358D8Cu;
    ctx->pc = 0x358D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D8Cu;
    // 0x358d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360E58u, 0x358D8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358D94u;
    // 0x358d94: 0x0  nop
    ctx->pc = 0x358d94u;
    // NOP
    // 0x358d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358d9c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x358d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x358da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358da4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x358da4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x358da8: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x358da8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x358dac: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x358dacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x358db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358db4: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x358db4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x358db8: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x358db8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x358dbc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x358dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x358dc0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x358dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x358dc4: 0x80d83ca  j           func_360F28
    ctx->pc = 0x358DC4u;
    ctx->pc = 0x358DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358DC4u;
    // 0x358dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360F28u, 0x358DC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358DCCu;
    // 0x358dcc: 0x0  nop
    ctx->pc = 0x358dccu;
    // NOP
    // 0x358dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358dd4: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x358dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x358dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358ddc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x358ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x358de0: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x358de0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x358de4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x358de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x358de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358dec: 0x80d83ba  j           func_360EE8
    ctx->pc = 0x358DECu;
    ctx->pc = 0x358DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358DECu;
    // 0x358df0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360EE8u, 0x358DECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358DF4u;
    // 0x358df4: 0x0  nop
    ctx->pc = 0x358df4u;
    // NOP
    ctx->pc = 0x358df8u;
}
