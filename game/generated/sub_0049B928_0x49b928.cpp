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

// Function: sub_0049B928
// Address: 0x49b928 - 0x49b9b0
void sub_0049B928_0x49b928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B928_0x49b928");
#endif

    switch (ctx->pc) {
        case 0x49b988u: goto label_49b988;
        default: break;
    }

    ctx->pc = 0x49b928u;

    // 0x49b928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49b928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49b92c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x49b92cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b930: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49b930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49b934: 0x247101c4  addiu       $s1, $v1, 0x1C4
    ctx->pc = 0x49b934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 452));
    // 0x49b938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49b938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49b93c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x49b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49b940: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49b940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49b944: 0xa46201c2  sh          $v0, 0x1C2($v1)
    ctx->pc = 0x49b944u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b948: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x49b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
    // 0x49b94c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49b94cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49b950: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49b950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49b954: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x49b954u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49b958: 0x1ca00007  bgtz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x49B958u;
    {
        const bool branch_taken_0x49b958 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x49B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B958u;
        // 0x49b95c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b958) {
            ctx->pc = 0x49B978u;
            goto label_49b978;
        }
    }
    ctx->pc = 0x49B960u;
    // 0x49b960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49b960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49b964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49b968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49b968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49b96c: 0x8126d66  j           func_49B598
    ctx->pc = 0x49B96Cu;
    ctx->pc = 0x49B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B96Cu;
    // 0x49b970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    sub_0049B598_0x49b598(rdram, ctx, runtime); return;
    ctx->pc = 0x49B974u;
    // 0x49b974: 0x0  nop
    ctx->pc = 0x49b974u;
    // NOP
label_49b978:
    // 0x49b978: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x49b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x49b97c: 0x86300000  lh          $s0, 0x0($s1)
    ctx->pc = 0x49b97cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49b980: 0xc126d66  jal         func_49B598
    ctx->pc = 0x49B980u;
    SET_GPR_U32(ctx, 31, 0x49B988u);
    ctx->pc = 0x49B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B980u;
    // 0x49b984: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B598u, 0x49B980u, 0x49B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B988u;
label_49b988:
    // 0x49b988: 0xa6300000  sh          $s0, 0x0($s1)
    ctx->pc = 0x49b988u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x49b98c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49b98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49b990: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49b990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49b994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49b994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b998: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x49b998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x49b99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49b99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49b9a0: 0xa462fa44  sh          $v0, -0x5BC($v1)
    ctx->pc = 0x49b9a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x49b9a4: 0x81297fa  j           func_4A5FE8
    ctx->pc = 0x49B9A4u;
    ctx->pc = 0x49B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B9A4u;
    // 0x49b9a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    sub_004A5FE8_0x4a5fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x49B9ACu;
    // 0x49b9ac: 0x0  nop
    ctx->pc = 0x49b9acu;
    // NOP
    ctx->pc = 0x49b9b0u;
}
