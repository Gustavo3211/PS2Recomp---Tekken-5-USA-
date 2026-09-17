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

// Function: sub_004DF488
// Address: 0x4df488 - 0x4df5b0
void sub_004DF488_0x4df488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF488_0x4df488");
#endif

    switch (ctx->pc) {
        case 0x4df520u: goto label_4df520;
        default: break;
    }

    ctx->pc = 0x4df488u;

    // 0x4df488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4df488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4df48c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4df48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4df490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4df490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4df494: 0x24501148  addiu       $s0, $v0, 0x1148
    ctx->pc = 0x4df494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4424));
    // 0x4df498: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4df498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4df49c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4df49cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df4a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4df4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4df4a4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4df4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4df4a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4df4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4df4ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4df4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4df4b0: 0x3463007f  ori         $v1, $v1, 0x7F
    ctx->pc = 0x4df4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)127);
    // 0x4df4b4: 0x2625015e  addiu       $a1, $s1, 0x15E
    ctx->pc = 0x4df4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4df4b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4df4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1148u));
    // 0x4df4bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4df4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4df4c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4df4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4df4c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4df4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4df4c8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4df4c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4df4cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4df4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4df4d0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4df4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4df4d4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4df4d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df4d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4df4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df4dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4df4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4df4e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4df4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4df4e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4df4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4df4e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4df4e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4df4ec: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4df4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4df4f0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4df4f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4df4f4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4df4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4df4f8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4df4f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df4fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DF4FCu;
    {
        const bool branch_taken_0x4df4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF4FCu;
        // 0x4df500: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df4fc) {
            ctx->pc = 0x4DF518u;
            goto label_4df518;
        }
    }
    ctx->pc = 0x4DF504u;
    // 0x4df504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4df504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4df508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4df508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4df50c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4df50cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4df510: 0x8137d6c  j           func_4DF5B0
    ctx->pc = 0x4DF510u;
    ctx->pc = 0x4DF514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF510u;
    // 0x4df514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF5B0u;
    sub_004DF5B0_0x4df5b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DF518u;
label_4df518:
    // 0x4df518: 0xc138028  jal         func_4E00A0
    ctx->pc = 0x4DF518u;
    SET_GPR_U32(ctx, 31, 0x4DF520u);
    ctx->pc = 0x4E00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E00A0u, 0x4DF518u, 0x4DF520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF520u;
label_4df520:
    // 0x4df520: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4df520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df524: 0x26260160  addiu       $a2, $s1, 0x160
    ctx->pc = 0x4df524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x4df528: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4df528u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4df52c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df530: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4df530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4df534: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df538: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4df53c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df540: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4df540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4df544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4df548: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4df548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4df54c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df550: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4df554: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4df554u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df558: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x4df558u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4df55c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4df55cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df560: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x4df560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4df564: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DF564u;
    {
        const bool branch_taken_0x4df564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF564u;
        // 0x4df568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df564) {
            ctx->pc = 0x4DF588u;
            goto label_4df588;
        }
    }
    ctx->pc = 0x4DF56Cu;
    // 0x4df56c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4df56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4df570: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4df570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4df574: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4df574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4df578: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4df578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4df57c: 0x8137d6c  j           func_4DF5B0
    ctx->pc = 0x4DF57Cu;
    ctx->pc = 0x4DF580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF57Cu;
    // 0x4df580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF5B0u;
    sub_004DF5B0_0x4df5b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DF584u;
    // 0x4df584: 0x0  nop
    ctx->pc = 0x4df584u;
    // NOP
label_4df588:
    // 0x4df588: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x4df588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4df58c: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x4df58cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4df590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4df590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4df594: 0xa622014a  sh          $v0, 0x14A($s1)
    ctx->pc = 0x4df594u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4df598: 0xa62001bc  sh          $zero, 0x1BC($s1)
    ctx->pc = 0x4df598u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 444), (uint16_t)GPR_U32(ctx, 0));
    // 0x4df59c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4df59cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4df5a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4df5a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4df5a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4df5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4df5a8: 0x8137d6c  j           func_4DF5B0
    ctx->pc = 0x4DF5A8u;
    ctx->pc = 0x4DF5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF5A8u;
    // 0x4df5ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF5B0u;
    sub_004DF5B0_0x4df5b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DF5B0u;
}
