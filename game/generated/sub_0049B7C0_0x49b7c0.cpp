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

// Function: sub_0049B7C0
// Address: 0x49b7c0 - 0x49b818
void sub_0049B7C0_0x49b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B7C0_0x49b7c0");
#endif

    ctx->pc = 0x49b7c0u;

    // 0x49b7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49b7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49b7c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x49b7c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b7c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49b7cc: 0x84620160  lh          $v0, 0x160($v1)
    ctx->pc = 0x49b7ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x49b7d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x49B7D0u;
    {
        const bool branch_taken_0x49b7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7D0u;
        // 0x49b7d4: 0x24650148  addiu       $a1, $v1, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b7d0) {
            ctx->pc = 0x49B800u;
            goto label_49b800;
        }
    }
    ctx->pc = 0x49B7D8u;
    // 0x49b7d8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x49b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49b7dc: 0xa46201c2  sh          $v0, 0x1C2($v1)
    ctx->pc = 0x49b7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b7e0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x49b7e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49b7e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x49b7e8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x49b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49b7ec: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49B7ECu;
    {
        const bool branch_taken_0x49b7ec = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x49B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B7ECu;
        // 0x49b7f0: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b7ec) {
            ctx->pc = 0x49B800u;
            goto label_49b800;
        }
    }
    ctx->pc = 0x49B7F4u;
    // 0x49b7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b7f8: 0x8126d66  j           func_49B598
    ctx->pc = 0x49B7F8u;
    ctx->pc = 0x49B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B7F8u;
    // 0x49b7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    sub_0049B598_0x49b598(rdram, ctx, runtime); return;
    ctx->pc = 0x49B800u;
label_49b800:
    // 0x49b800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b804: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49b804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49b808: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49b80c: 0xa462fa44  sh          $v0, -0x5BC($v1)
    ctx->pc = 0x49b80cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x49b810: 0x81297fa  j           func_4A5FE8
    ctx->pc = 0x49B810u;
    ctx->pc = 0x49B814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B810u;
    // 0x49b814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    sub_004A5FE8_0x4a5fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x49B818u;
}
