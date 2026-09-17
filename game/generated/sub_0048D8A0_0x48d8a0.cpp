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

// Function: sub_0048D8A0
// Address: 0x48d8a0 - 0x48da10
void sub_0048D8A0_0x48d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D8A0_0x48d8a0");
#endif

    switch (ctx->pc) {
        case 0x48d948u: goto label_48d948;
        default: break;
    }

    ctx->pc = 0x48d8a0u;

    // 0x48d8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48d8a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x48d8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d8a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48d8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48d8ac: 0x24f0000c  addiu       $s0, $a3, 0xC
    ctx->pc = 0x48d8acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x48d8b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48d8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48d8b4: 0x24f10004  addiu       $s1, $a3, 0x4
    ctx->pc = 0x48d8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x48d8b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48d8bc: 0x24f20008  addiu       $s2, $a3, 0x8
    ctx->pc = 0x48d8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x48d8c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x48d8c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x48d8c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d8c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x48d8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x48d8cc: 0x24e40002  addiu       $a0, $a3, 0x2
    ctx->pc = 0x48d8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x48d8d0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x48d8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x48d8d4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x48d8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x48d8d8: 0x24e8001c  addiu       $t0, $a3, 0x1C
    ctx->pc = 0x48d8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x48d8dc: 0x6a403  sra         $s4, $a2, 16
    ctx->pc = 0x48d8dcu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 16));
    // 0x48d8e0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x48d8e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48d8e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x48d8e8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x48d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48d8ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48D8ECu;
    {
        const bool branch_taken_0x48d8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D8ECu;
        // 0x48d8f0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d8ec) {
            ctx->pc = 0x48D900u;
            goto label_48d900;
        }
    }
    ctx->pc = 0x48D8F4u;
    // 0x48d8f4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x48d8f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48d8f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48d8fc: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x48d8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_48d900:
    // 0x48d900: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x48d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x48d904: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x48d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48d908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48d908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48d90c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x48d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x48d910: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x48d910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x48d914: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x48d914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48d918: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x48d918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48d91c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x48d91cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x48d920: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x48d920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x48d924: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x48d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48d928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48d928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48d92c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x48d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x48d930: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x48d930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x48d934: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x48d934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x48d938: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x48d938u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x48d93c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x48d93cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x48d940: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x48D940u;
    SET_GPR_U32(ctx, 31, 0x48D948u);
    ctx->pc = 0x48D944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D940u;
    // 0x48d944: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x48D940u, 0x48D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D948u;
label_48d948:
    // 0x48d948: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x48d948u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x48d94c: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x48d94cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x48d950: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x48d950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d954: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x48d954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x48d958: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x48d958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x48d95c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x48d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72D6C0u));
    // 0x48d960: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x48d960u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48d964: 0x8666002a  lh          $a2, 0x2A($s3)
    ctx->pc = 0x48d964u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
    // 0x48d968: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48d968u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48d96c: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x48d96cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x48d970: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x48d970u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x48d974: 0x86490002  lh          $t1, 0x2($s2)
    ctx->pc = 0x48d974u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x48d978: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x48d978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x48d97c: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x48d97cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x48d980: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48d980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48d984: 0xa4740000  sh          $s4, 0x0($v1)
    ctx->pc = 0x48d984u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x48d988: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48d988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48d98c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x48d98cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48d990: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48d990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48d994: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x48d994u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x48d998: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48d998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48d99c: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x48d99cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x48d9a0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48d9a4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x48d9a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x48d9a8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48d9ac: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x48d9acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48d9b0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48d9b4: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x48d9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x48d9b8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48d9bc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x48d9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48d9c0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48d9c4: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x48d9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x48d9c8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48d9cc: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x48d9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48d9d0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48d9d4: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x48d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x48d9d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x48d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48d9dc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x48d9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48d9e0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48d9e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48d9e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d9e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48d9e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48d9ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48d9ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d9f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48d9f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48d9f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48d9f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d9f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x48d9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48d9fc: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x48d9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x48da00: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48da00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48da04: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x48da04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x48da08: 0x3e00008  jr          $ra
    ctx->pc = 0x48DA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DA08u;
        // 0x48da0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DA10u;
}
