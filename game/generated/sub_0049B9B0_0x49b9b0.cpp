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

// Function: sub_0049B9B0
// Address: 0x49b9b0 - 0x49ba70
void sub_0049B9B0_0x49b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B9B0_0x49b9b0");
#endif

    switch (ctx->pc) {
        case 0x49ba48u: goto label_49ba48;
        default: break;
    }

    ctx->pc = 0x49b9b0u;

    // 0x49b9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49b9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49b9b4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49b9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b9b8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x49b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49b9bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49b9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49b9c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49b9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49b9c4: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x49b9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x49b9c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49b9cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49b9d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x49b9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x49b9d4: 0x24f101c4  addiu       $s1, $a3, 0x1C4
    ctx->pc = 0x49b9d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 452));
    // 0x49b9d8: 0xa4e201c2  sh          $v0, 0x1C2($a3)
    ctx->pc = 0x49b9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b9dc: 0x2642d680  addiu       $v0, $s2, -0x2980
    ctx->pc = 0x49b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x49b9e0: 0x84452268  lh          $a1, 0x2268($v0)
    ctx->pc = 0x49b9e0u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x72F8E8u));
    // 0x49b9e4: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x49B9E4u;
    {
        const bool branch_taken_0x49b9e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x49B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B9E4u;
        // 0x49b9e8: 0x24e60148  addiu       $a2, $a3, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b9e4) {
            ctx->pc = 0x49BA04u;
            goto label_49ba04;
        }
    }
    ctx->pc = 0x49B9ECu;
    // 0x49b9ec: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x49b9ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49b9f0: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x49b9f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x49b9f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x49B9F4u;
    {
        const bool branch_taken_0x49b9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b9f4) {
            ctx->pc = 0x49B9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49B9F4u;
            // 0x49b9f8: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49BA08u;
            goto label_49ba08;
        }
    }
    ctx->pc = 0x49B9FCu;
    // 0x49b9fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x49b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49ba00: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49ba00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_49ba04:
    // 0x49ba04: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x49ba04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_49ba08:
    // 0x49ba08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49ba0c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x49ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49ba10: 0x1c600009  bgtz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x49BA10u;
    {
        const bool branch_taken_0x49ba10 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x49BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49BA10u;
        // 0x49ba14: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ba10) {
            ctx->pc = 0x49BA38u;
            goto label_49ba38;
        }
    }
    ctx->pc = 0x49BA18u;
    // 0x49ba18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49ba18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ba1c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x49ba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ba20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49ba20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49ba24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49ba24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ba28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x49ba28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49ba2c: 0x8126d66  j           func_49B598
    ctx->pc = 0x49BA2Cu;
    ctx->pc = 0x49BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BA2Cu;
    // 0x49ba30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    sub_0049B598_0x49b598(rdram, ctx, runtime); return;
    ctx->pc = 0x49BA34u;
    // 0x49ba34: 0x0  nop
    ctx->pc = 0x49ba34u;
    // NOP
label_49ba38:
    // 0x49ba38: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x49ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x49ba3c: 0x86300000  lh          $s0, 0x0($s1)
    ctx->pc = 0x49ba3cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49ba40: 0xc126d66  jal         func_49B598
    ctx->pc = 0x49BA40u;
    SET_GPR_U32(ctx, 31, 0x49BA48u);
    ctx->pc = 0x49BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BA40u;
    // 0x49ba44: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B598u, 0x49BA40u, 0x49BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49BA48u;
label_49ba48:
    // 0x49ba48: 0xa6300000  sh          $s0, 0x0($s1)
    ctx->pc = 0x49ba48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x49ba4c: 0x2643d680  addiu       $v1, $s2, -0x2980
    ctx->pc = 0x49ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x49ba50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49ba50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ba54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49ba54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ba58: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x49ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x49ba5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49ba5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49ba60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x49ba60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49ba64: 0xa46223c4  sh          $v0, 0x23C4($v1)
    ctx->pc = 0x49ba64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ba68: 0x81297fa  j           func_4A5FE8
    ctx->pc = 0x49BA68u;
    ctx->pc = 0x49BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49BA68u;
    // 0x49ba6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    sub_004A5FE8_0x4a5fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x49BA70u;
}
