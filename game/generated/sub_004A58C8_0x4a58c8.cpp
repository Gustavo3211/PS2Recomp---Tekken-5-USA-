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

// Function: sub_004A58C8
// Address: 0x4a58c8 - 0x4a5a98
void sub_004A58C8_0x4a58c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A58C8_0x4a58c8");
#endif

    switch (ctx->pc) {
        case 0x4a5988u: goto label_4a5988;
        case 0x4a59f0u: goto label_4a59f0;
        case 0x4a5a00u: goto label_4a5a00;
        case 0x4a5a10u: goto label_4a5a10;
        case 0x4a5a40u: goto label_4a5a40;
        default: break;
    }

    ctx->pc = 0x4a58c8u;

    // 0x4a58c8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a58c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a58cc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a58ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a58d0: 0x24a50c28  addiu       $a1, $a1, 0xC28
    ctx->pc = 0x4a58d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3112));
    // 0x4a58d4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x4a58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x4a58d8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4a58d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4a58dc: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4a58dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4a58e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a58e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a58e4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4a58e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4a58e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a58e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a58ec: 0x25280c38  addiu       $t0, $t1, 0xC38
    ctx->pc = 0x4a58ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 3128));
    // 0x4a58f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a58f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a58f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a58f8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a58f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a58fc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4a58fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4a5900: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a5900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a5904: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4a5904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4a5908: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4a5908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4a590c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4a590cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4a5910: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a5910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a5914: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a5914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a5918: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4a5918u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0C38u));
    // 0x4a591c: 0x24a70c20  addiu       $a3, $a1, 0xC20
    ctx->pc = 0x4a591cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3104));
    // 0x4a5920: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a5920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a5924: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a5924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5928: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a5928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a592c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4a592cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4a5930: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a5930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a5934: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a5934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a5938: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4a5938u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4a593c: 0x3c010052  lui         $at, 0x52
    ctx->pc = 0x4a593cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)82 << 16));
    // 0x4a5940: 0x24218d00  addiu       $at, $at, -0x7300
    ctx->pc = 0x4a5940u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294937856));
    // 0x4a5944: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4a5944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4a5948: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a5948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a594c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x4a594cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a5950: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4a5950u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a5954: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a5954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a5958: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4a5958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4a595c: 0xaec20c3c  sw          $v0, 0xC3C($s6)
    ctx->pc = 0x4a595cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 3132), GPR_U32(ctx, 2));
    // 0x4a5960: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a5960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a5964: 0x4c00034  bltz        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x4A5964u;
    {
        const bool branch_taken_0x4a5964 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4A5968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5964u;
        // 0x4a5968: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5964) {
            ctx->pc = 0x4A5A38u;
            goto label_4a5a38;
        }
    }
    ctx->pc = 0x4A596Cu;
    // 0x4a596c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4a596cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5970: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4a5970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5974: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4a5974u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5978: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x4a5978u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a597c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x4a597cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5980: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x4a5980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a5984: 0x0  nop
    ctx->pc = 0x4a5984u;
    // NOP
label_4a5988:
    // 0x4a5988: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4a5988u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a598c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a5990: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4a5990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a5994: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4a5994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4a5998: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4a5998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4a599c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a599cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a59a0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a59a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a59a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a59a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a59a8: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4A59A8u;
    {
        const bool branch_taken_0x4a59a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59A8u;
        // 0x4a59ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a59a8) {
            ctx->pc = 0x4A5A10u;
            goto label_4a5a10;
        }
    }
    ctx->pc = 0x4A59B0u;
    // 0x4a59b0: 0x85230c38  lh          $v1, 0xC38($t1)
    ctx->pc = 0x4a59b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 3128)));
    // 0x4a59b4: 0x10750010  beq         $v1, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A59B4u;
    {
        const bool branch_taken_0x4a59b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x4a59b4) {
            ctx->pc = 0x4A59F8u;
            goto label_4a59f8;
        }
    }
    ctx->pc = 0x4A59BCu;
    // 0x4a59bc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x4a59bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a59c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A59C0u;
    {
        const bool branch_taken_0x4a59c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a59c0) {
            ctx->pc = 0x4A59D8u;
            goto label_4a59d8;
        }
    }
    ctx->pc = 0x4A59C8u;
    // 0x4a59c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A59C8u;
    {
        const bool branch_taken_0x4a59c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a59c8) {
            ctx->pc = 0x4A59E8u;
            goto label_4a59e8;
        }
    }
    ctx->pc = 0x4A59D0u;
    // 0x4a59d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4A59D0u;
    {
        const bool branch_taken_0x4a59d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59D0u;
        // 0x4a59d4: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a59d0) {
            ctx->pc = 0x4A5A14u;
            goto label_4a5a14;
        }
    }
    ctx->pc = 0x4A59D8u;
label_4a59d8:
    // 0x4a59d8: 0x1073000b  beq         $v1, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x4A59D8u;
    {
        const bool branch_taken_0x4a59d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x4a59d8) {
            ctx->pc = 0x4A5A08u;
            goto label_4a5a08;
        }
    }
    ctx->pc = 0x4A59E0u;
    // 0x4a59e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4A59E0u;
    {
        const bool branch_taken_0x4a59e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59E0u;
        // 0x4a59e4: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a59e0) {
            ctx->pc = 0x4A5A14u;
            goto label_4a5a14;
        }
    }
    ctx->pc = 0x4A59E8u;
label_4a59e8:
    // 0x4a59e8: 0xc1293f6  jal         func_4A4FD8
    ctx->pc = 0x4A59E8u;
    SET_GPR_U32(ctx, 31, 0x4A59F0u);
    ctx->pc = 0x4A4FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4FD8u, 0x4A59E8u, 0x4A59F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A59F0u;
label_4a59f0:
    // 0x4a59f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A59F0u;
    {
        const bool branch_taken_0x4a59f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59F0u;
        // 0x4a59f4: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a59f0) {
            ctx->pc = 0x4A5A14u;
            goto label_4a5a14;
        }
    }
    ctx->pc = 0x4A59F8u;
label_4a59f8:
    // 0x4a59f8: 0xc12946e  jal         func_4A51B8
    ctx->pc = 0x4A59F8u;
    SET_GPR_U32(ctx, 31, 0x4A5A00u);
    ctx->pc = 0x4A51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A51B8u, 0x4A59F8u, 0x4A5A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5A00u;
label_4a5a00:
    // 0x4a5a00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A5A00u;
    {
        const bool branch_taken_0x4a5a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A00u;
        // 0x4a5a04: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5a00) {
            ctx->pc = 0x4A5A14u;
            goto label_4a5a14;
        }
    }
    ctx->pc = 0x4A5A08u;
label_4a5a08:
    // 0x4a5a08: 0xc1294d8  jal         func_4A5360
    ctx->pc = 0x4A5A08u;
    SET_GPR_U32(ctx, 31, 0x4A5A10u);
    ctx->pc = 0x4A5360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5360u, 0x4A5A08u, 0x4A5A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5A10u;
label_4a5a10:
    // 0x4a5a10: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a5a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a5a14:
    // 0x4a5a14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a5a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5a18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a5a1c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a5a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a5a20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a5a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a5a24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a5a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a5a28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a5a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a5a2c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a5a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5a30: 0x441ffd5  bgez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x4A5A30u;
    {
        const bool branch_taken_0x4a5a30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A30u;
        // 0x4a5a34: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5a30) {
            ctx->pc = 0x4A5988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5988;
        }
    }
    ctx->pc = 0x4A5A38u;
label_4a5a38:
    // 0x4a5a38: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A5A38u;
    SET_GPR_U32(ctx, 31, 0x4A5A40u);
    ctx->pc = 0x4A5A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5A38u;
    // 0x4a5a3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A5A38u, 0x4A5A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5A40u;
label_4a5a40:
    // 0x4a5a40: 0x240400e3  addiu       $a0, $zero, 0xE3
    ctx->pc = 0x4a5a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    // 0x4a5a44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5a48: 0x26c50c3c  addiu       $a1, $s6, 0xC3C
    ctx->pc = 0x4a5a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3132));
    // 0x4a5a4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a5a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5a50: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x4a5a50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a5a54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a5a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a5a58: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a5a5c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a5a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5a60: 0x9462001a  lhu         $v0, 0x1A($v1)
    ctx->pc = 0x4a5a60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4a5a64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a5a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5a68: 0xa4820130  sh          $v0, 0x130($a0)
    ctx->pc = 0x4a5a68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5a6c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a5a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a5a70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a5a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a5a74: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5a78: 0x9462001c  lhu         $v0, 0x1C($v1)
    ctx->pc = 0x4a5a78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x4a5a7c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a5a7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a5a80: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4a5a80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a5a84: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4a5a84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a5a88: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4a5a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a5a8c: 0xa4820132  sh          $v0, 0x132($a0)
    ctx->pc = 0x4a5a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5a90: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A90u;
        // 0x4a5a94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5A98u;
}
