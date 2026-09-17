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

// Function: sub_0049B718
// Address: 0x49b718 - 0x49b768
void sub_0049B718_0x49b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B718_0x49b718");
#endif

    ctx->pc = 0x49b718u;

    // 0x49b718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49b718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49b71c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x49b71cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49b720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49b724: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x49b724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49b728: 0xa46201c2  sh          $v0, 0x1C2($v1)
    ctx->pc = 0x49b728u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b72c: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x49b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
    // 0x49b730: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49b730u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49b734: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49b738: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x49b738u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49b73c: 0x1ca00004  bgtz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x49B73Cu;
    {
        const bool branch_taken_0x49b73c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x49B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B73Cu;
        // 0x49b740: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b73c) {
            ctx->pc = 0x49B750u;
            goto label_49b750;
        }
    }
    ctx->pc = 0x49B744u;
    // 0x49b744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b748: 0x8126d66  j           func_49B598
    ctx->pc = 0x49B748u;
    ctx->pc = 0x49B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B748u;
    // 0x49b74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    sub_0049B598_0x49b598(rdram, ctx, runtime); return;
    ctx->pc = 0x49B750u;
label_49b750:
    // 0x49b750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b754: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49b754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49b758: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x49b758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x49b75c: 0xa462fa44  sh          $v0, -0x5BC($v1)
    ctx->pc = 0x49b75cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x49b760: 0x81297fa  j           func_4A5FE8
    ctx->pc = 0x49B760u;
    ctx->pc = 0x49B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B760u;
    // 0x49b764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    sub_004A5FE8_0x4a5fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x49B768u;
}
