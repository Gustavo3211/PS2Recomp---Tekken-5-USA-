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

// Function: sub_003159A8
// Address: 0x3159a8 - 0x315aa8
void sub_003159A8_0x3159a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003159A8_0x3159a8");
#endif

    switch (ctx->pc) {
        case 0x315a28u: goto label_315a28;
        case 0x315a58u: goto label_315a58;
        default: break;
    }

    ctx->pc = 0x3159a8u;

    // 0x3159a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3159a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3159ac: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x3159acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x3159b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3159b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3159b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3159b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3159b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3159b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3159bc: 0x2632007c  addiu       $s2, $s1, 0x7C
    ctx->pc = 0x3159bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    // 0x3159c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3159c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3159c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3159c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3159c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3159c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3159cc: 0x3c065100  lui         $a2, 0x5100
    ctx->pc = 0x3159ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20736 << 16));
    // 0x3159d0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3159d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3159d4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x3159d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x3159d8: 0x3c176000  lui         $s7, 0x6000
    ctx->pc = 0x3159d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)24576 << 16));
    // 0x3159dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3159dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3159e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3159e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3159e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3159e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3159e8: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x3159e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x3159ec: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x3159ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x3159f0: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x3159f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x3159f4: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x3159f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x3159f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3159f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3159fc: 0x8e330078  lw          $s3, 0x78($s1)
    ctx->pc = 0x3159fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x315a00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x315a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x315a04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x315a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x315a08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x315a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x315a0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x315a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315a10: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x315a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x315a14: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x315a14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x315a18: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x315a18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x315a1c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x315a1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x315a20: 0x46b025  or          $s6, $v0, $a2
    ctx->pc = 0x315a20u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x315a24: 0x47a825  or          $s5, $v0, $a3
    ctx->pc = 0x315a24u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_315a28:
    // 0x315a28: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x315a28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x315a2c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x315a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x315a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315a34: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x315a34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x315a38: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x315a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x315a3c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x315a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x315a40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x315a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x315a44: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x315a44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x315a48: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x315a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x315a4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x315a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x315a50: 0xc0cbf98  jal         func_32FE60
    ctx->pc = 0x315A50u;
    SET_GPR_U32(ctx, 31, 0x315A58u);
    ctx->pc = 0x315A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A50u;
    // 0x315a54: 0xae16000c  sw          $s6, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FE60u, 0x315A50u, 0x315A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A58u;
label_315a58:
    // 0x315a58: 0xae170020  sw          $s7, 0x20($s0)
    ctx->pc = 0x315a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 23));
    // 0x315a5c: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x315a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x315a60: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x315a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x315a64: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x315a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x315a68: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x315A68u;
    {
        const bool branch_taken_0x315a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A68u;
        // 0x315a6c: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a68) {
            ctx->pc = 0x315A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315a28;
        }
    }
    ctx->pc = 0x315A70u;
    // 0x315a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315a74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x315a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x315a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x315a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315a7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x315a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315a80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x315a80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315a84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x315a84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x315a88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x315a88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315a8c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x315a8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x315a90: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x315a90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x315a94: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x315a94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x315a98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x315a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x315a9c: 0x80c52d8  j           func_314B60
    ctx->pc = 0x315A9Cu;
    ctx->pc = 0x315AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A9Cu;
    // 0x315aa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314B60u, 0x315A9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x315AA4u;
    // 0x315aa4: 0x0  nop
    ctx->pc = 0x315aa4u;
    // NOP
    ctx->pc = 0x315aa8u;
}
