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

// Function: sub_0049B818
// Address: 0x49b818 - 0x49b880
void sub_0049B818_0x49b818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B818_0x49b818");
#endif

    ctx->pc = 0x49b818u;

    // 0x49b818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49b818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49b81c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x49b81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49b820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49b824: 0x84c2015e  lh          $v0, 0x15E($a2)
    ctx->pc = 0x49b824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 350)));
    // 0x49b828: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x49B828u;
    {
        const bool branch_taken_0x49b828 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x49B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B828u;
        // 0x49b82c: 0x24c70148  addiu       $a3, $a2, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b828) {
            ctx->pc = 0x49B868u;
            goto label_49b868;
        }
    }
    ctx->pc = 0x49B830u;
    // 0x49b830: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x49b830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x49b834: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x49b834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49b838: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x49b838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x49b83c: 0xa4a2fa44  sh          $v0, -0x5BC($a1)
    ctx->pc = 0x49b83cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x49b840: 0xa4c301c2  sh          $v1, 0x1C2($a2)
    ctx->pc = 0x49b840u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 450), (uint16_t)GPR_U32(ctx, 3));
    // 0x49b844: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49b844u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49b848: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49b84c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x49b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49b850: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x49B850u;
    {
        const bool branch_taken_0x49b850 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x49B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B850u;
        // 0x49b854: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b850) {
            ctx->pc = 0x49B874u;
            goto label_49b874;
        }
    }
    ctx->pc = 0x49B858u;
    // 0x49b858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b85c: 0x8126d66  j           func_49B598
    ctx->pc = 0x49B85Cu;
    ctx->pc = 0x49B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B85Cu;
    // 0x49b860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    sub_0049B598_0x49b598(rdram, ctx, runtime); return;
    ctx->pc = 0x49B864u;
    // 0x49b864: 0x0  nop
    ctx->pc = 0x49b864u;
    // NOP
label_49b868:
    // 0x49b868: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49b868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49b86c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x49b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x49b870: 0xa462fa44  sh          $v0, -0x5BC($v1)
    ctx->pc = 0x49b870u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
label_49b874:
    // 0x49b874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b878: 0x81297fa  j           func_4A5FE8
    ctx->pc = 0x49B878u;
    ctx->pc = 0x49B87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B878u;
    // 0x49b87c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    sub_004A5FE8_0x4a5fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x49B880u;
}
