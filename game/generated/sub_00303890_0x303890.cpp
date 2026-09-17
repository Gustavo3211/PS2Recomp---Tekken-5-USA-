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

// Function: sub_00303890
// Address: 0x303890 - 0x303fd8
void sub_00303890_0x303890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303890_0x303890");
#endif

    switch (ctx->pc) {
        case 0x3038e8u: goto label_3038e8;
        case 0x303958u: goto label_303958;
        case 0x303988u: goto label_303988;
        case 0x3039f0u: goto label_3039f0;
        case 0x303a38u: goto label_303a38;
        case 0x303a70u: goto label_303a70;
        case 0x303aa0u: goto label_303aa0;
        case 0x303b10u: goto label_303b10;
        case 0x303b80u: goto label_303b80;
        case 0x303ba8u: goto label_303ba8;
        case 0x303c10u: goto label_303c10;
        case 0x303d18u: goto label_303d18;
        case 0x303dc0u: goto label_303dc0;
        case 0x303e30u: goto label_303e30;
        case 0x303eb8u: goto label_303eb8;
        case 0x303f00u: goto label_303f00;
        case 0x303f40u: goto label_303f40;
        case 0x303f88u: goto label_303f88;
        default: break;
    }

    ctx->pc = 0x303890u;

    // 0x303890: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x303890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x303894: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x303894u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303898: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x303898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x30389c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30389cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3038a0: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x3038a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x3038a4: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x3038a4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3038a8: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x3038a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x3038ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3038acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3038b0: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x3038b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x3038b4: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x3038b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x3038b8: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x3038b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x3038bc: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x3038bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x3038c0: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x3038c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x3038c4: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x3038c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x3038c8: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x3038c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x3038cc: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x3038ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3038d0: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x3038d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x3038d4: 0x84e70042  lh          $a3, 0x42($a3)
    ctx->pc = 0x3038d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 66)));
    // 0x3038d8: 0x110001b3  beqz        $t0, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x3038D8u;
    {
        const bool branch_taken_0x3038d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3038DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038D8u;
        // 0x3038dc: 0xafa700d4  sw          $a3, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3038d8) {
            ctx->pc = 0x303FA8u;
            goto label_303fa8;
        }
    }
    ctx->pc = 0x3038E0u;
    // 0x3038e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3038e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3038e4: 0x0  nop
    ctx->pc = 0x3038e4u;
    // NOP
label_3038e8:
    // 0x3038e8: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x3038e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x3038ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3038ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3038f0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3038f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3038f4: 0x2a640064  slti        $a0, $s3, 0x64
    ctx->pc = 0x3038f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x3038f8: 0x0  nop
    ctx->pc = 0x3038f8u;
    // NOP
    // 0x3038fc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3038FCu;
    {
        const bool branch_taken_0x3038fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x303900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038FCu;
        // 0x303900: 0xa4600000  sh          $zero, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3038fc) {
            ctx->pc = 0x3038E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3038e8;
        }
    }
    ctx->pc = 0x303904u;
    // 0x303904: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x303904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303908: 0x120001a7  beqz        $s0, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x303908u;
    {
        const bool branch_taken_0x303908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303908u;
        // 0x30390c: 0x200602d  daddu       $t4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303908) {
            ctx->pc = 0x303FA8u;
            goto label_303fa8;
        }
    }
    ctx->pc = 0x303910u;
    // 0x303910: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x303910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x303914: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x303914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x303918: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x303918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30391c: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x30391cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
    // 0x303920: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x303920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x303924: 0x34424f4d  ori         $v0, $v0, 0x4F4D
    ctx->pc = 0x303924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20301);
    // 0x303928: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303928u;
    {
        const bool branch_taken_0x303928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x303928) {
            ctx->pc = 0x303940u;
            goto label_303940;
        }
    }
    ctx->pc = 0x303930u;
    // 0x303930: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x303930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x303934: 0x47602  srl         $t6, $a0, 24
    ctx->pc = 0x303934u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x303938: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x303938u;
    {
        const bool branch_taken_0x303938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303938u;
        // 0x30393c: 0x200602d  daddu       $t4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303938) {
            ctx->pc = 0x303950u;
            goto label_303950;
        }
    }
    ctx->pc = 0x303940u;
label_303940:
    // 0x303940: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303940u;
    {
        const bool branch_taken_0x303940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x303944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303940u;
        // 0x303944: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303940) {
            ctx->pc = 0x303950u;
            goto label_303950;
        }
    }
    ctx->pc = 0x303948u;
    // 0x303948: 0x54820198  bnel        $a0, $v0, . + 4 + (0x198 << 2)
    ctx->pc = 0x303948u;
    {
        const bool branch_taken_0x303948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x303948) {
            ctx->pc = 0x30394Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303948u;
            // 0x30394c: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303FACu;
            goto label_303fac;
        }
    }
    ctx->pc = 0x303950u;
label_303950:
    // 0x303950: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x303950u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303954: 0x0  nop
    ctx->pc = 0x303954u;
    // NOP
label_303958:
    // 0x303958: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x303958u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30395c: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x30395Cu;
    {
        const bool branch_taken_0x30395c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x303960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30395Cu;
        // 0x303960: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30395c) {
            ctx->pc = 0x303980u;
            goto label_303980;
        }
    }
    ctx->pc = 0x303964u;
    // 0x303964: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x303964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x303968: 0x0  nop
    ctx->pc = 0x303968u;
    // NOP
    // 0x30396c: 0x0  nop
    ctx->pc = 0x30396cu;
    // NOP
    // 0x303970: 0x0  nop
    ctx->pc = 0x303970u;
    // NOP
    // 0x303974: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x303974u;
    {
        const bool branch_taken_0x303974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303974u;
        // 0x303978: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303974) {
            ctx->pc = 0x303958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303958;
        }
    }
    ctx->pc = 0x30397Cu;
    // 0x30397c: 0x0  nop
    ctx->pc = 0x30397cu;
    // NOP
label_303980:
    // 0x303980: 0x29c60002  slti        $a2, $t6, 0x2
    ctx->pc = 0x303980u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x303984: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x303984u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_303988:
    // 0x303988: 0x16a00022  bnez        $s5, . + 4 + (0x22 << 2)
    ctx->pc = 0x303988u;
    {
        const bool branch_taken_0x303988 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x30398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303988u;
        // 0x30398c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303988) {
            ctx->pc = 0x303A14u;
            goto label_303a14;
        }
    }
    ctx->pc = 0x303990u;
    // 0x303990: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x303990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303994: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x303994u;
    {
        const bool branch_taken_0x303994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303994u;
        // 0x303998: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303994) {
            ctx->pc = 0x3039C0u;
            goto label_3039c0;
        }
    }
    ctx->pc = 0x30399Cu;
    // 0x30399c: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x30399cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3039a0: 0x9605fffe  lhu         $a1, -0x2($s0)
    ctx->pc = 0x3039a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967294)));
    // 0x3039a4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3039a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3039a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3039a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3039ac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3039acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3039b0: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x3039b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x3039b4: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x3039b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3039b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3039B8u;
    {
        const bool branch_taken_0x3039b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3039BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039B8u;
        // 0x3039bc: 0x35403  sra         $t2, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039b8) {
            ctx->pc = 0x3039D8u;
            goto label_3039d8;
        }
    }
    ctx->pc = 0x3039C0u;
label_3039c0:
    // 0x3039c0: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x3039c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3039c4: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x3039c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x3039c8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x3039c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3039cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3039ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3039d0: 0xa48a0000  sh          $t2, 0x0($a0)
    ctx->pc = 0x3039d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x3039d4: 0x25403  sra         $t2, $v0, 16
    ctx->pc = 0x3039d4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 16));
label_3039d8:
    // 0x3039d8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3039d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3039dc: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x3039DCu;
    {
        const bool branch_taken_0x3039dc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3039E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039DCu;
        // 0x3039e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039dc) {
            ctx->pc = 0x303A0Cu;
            goto label_303a0c;
        }
    }
    ctx->pc = 0x3039E4u;
    // 0x3039e4: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3039E4u;
    {
        const bool branch_taken_0x3039e4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3039E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039E4u;
        // 0x3039e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039e4) {
            ctx->pc = 0x303A0Cu;
            goto label_303a0c;
        }
    }
    ctx->pc = 0x3039ECu;
    // 0x3039ec: 0x0  nop
    ctx->pc = 0x3039ecu;
    // NOP
label_3039f0:
    // 0x3039f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3039f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3039f4: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x3039f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3039f8: 0x0  nop
    ctx->pc = 0x3039f8u;
    // NOP
    // 0x3039fc: 0x0  nop
    ctx->pc = 0x3039fcu;
    // NOP
    // 0x303a00: 0x0  nop
    ctx->pc = 0x303a00u;
    // NOP
    // 0x303a04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x303A04u;
    {
        const bool branch_taken_0x303a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A04u;
        // 0x303a08: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a04) {
            ctx->pc = 0x3039F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3039f0;
        }
    }
    ctx->pc = 0x303A0Cu;
label_303a0c:
    // 0x303a0c: 0x52a0ffde  beql        $s5, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x303A0Cu;
    {
        const bool branch_taken_0x303a0c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x303a0c) {
            ctx->pc = 0x303A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303A0Cu;
            // 0x303a10: 0x8e150000  lw          $s5, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303988;
        }
    }
    ctx->pc = 0x303A14u;
label_303a14:
    // 0x303a14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x303a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x303a18: 0x12a20163  beq         $s5, $v0, . + 4 + (0x163 << 2)
    ctx->pc = 0x303A18u;
    {
        const bool branch_taken_0x303a18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x303A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A18u;
        // 0x303a1c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a18) {
            ctx->pc = 0x303FA8u;
            goto label_303fa8;
        }
    }
    ctx->pc = 0x303A20u;
    // 0x303a20: 0x56a20162  bnel        $s5, $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x303A20u;
    {
        const bool branch_taken_0x303a20 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x303a20) {
            ctx->pc = 0x303A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303A20u;
            // 0x303a24: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303FACu;
            goto label_303fac;
        }
    }
    ctx->pc = 0x303A28u;
    // 0x303a28: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x303A28u;
    {
        const bool branch_taken_0x303a28 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x303A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A28u;
        // 0x303a2c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a28) {
            ctx->pc = 0x303A60u;
            goto label_303a60;
        }
    }
    ctx->pc = 0x303A30u;
    // 0x303a30: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x303a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x303a34: 0x0  nop
    ctx->pc = 0x303a34u;
    // NOP
label_303a38:
    // 0x303a38: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x303a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x303a3c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x303a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x303a40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x303a40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x303a44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x303a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303a48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x303a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303a4c: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x303a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x303a50: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x303a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x303a54: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x303a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x303a58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x303A58u;
    {
        const bool branch_taken_0x303a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A58u;
        // 0x303a5c: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a58) {
            ctx->pc = 0x303A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303a38;
        }
    }
    ctx->pc = 0x303A60u;
label_303a60:
    // 0x303a60: 0x19400036  blez        $t2, . + 4 + (0x36 << 2)
    ctx->pc = 0x303A60u;
    {
        const bool branch_taken_0x303a60 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x303A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A60u;
        // 0x303a64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a60) {
            ctx->pc = 0x303B3Cu;
            goto label_303b3c;
        }
    }
    ctx->pc = 0x303A68u;
    // 0x303a68: 0x29cb0002  slti        $t3, $t6, 0x2
    ctx->pc = 0x303a68u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x303a6c: 0x0  nop
    ctx->pc = 0x303a6cu;
    // NOP
label_303a70:
    // 0x303a70: 0x1560001d  bnez        $t3, . + 4 + (0x1D << 2)
    ctx->pc = 0x303A70u;
    {
        const bool branch_taken_0x303a70 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x303A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A70u;
        // 0x303a74: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a70) {
            ctx->pc = 0x303AE8u;
            goto label_303ae8;
        }
    }
    ctx->pc = 0x303A78u;
    // 0x303a78: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x303a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x303a7c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x303a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x303a80: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x303a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x303a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a88: 0x18800014  blez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x303A88u;
    {
        const bool branch_taken_0x303a88 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x303A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A88u;
        // 0x303a8c: 0x84690000  lh          $t1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a88) {
            ctx->pc = 0x303ADCu;
            goto label_303adc;
        }
    }
    ctx->pc = 0x303A90u;
    // 0x303a90: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x303a90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x303a94: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x303a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a98: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x303a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x303a9c: 0x0  nop
    ctx->pc = 0x303a9cu;
    // NOP
label_303aa0:
    // 0x303aa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x303aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303aa4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x303aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x303aa8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x303aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x303aac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x303aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303ab0: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x303ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x303ab4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x303ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x303ab8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303AB8u;
    {
        const bool branch_taken_0x303ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AB8u;
        // 0x303abc: 0xa7302a  slt         $a2, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ab8) {
            ctx->pc = 0x303ACCu;
            goto label_303acc;
        }
    }
    ctx->pc = 0x303AC0u;
    // 0x303ac0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x303ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303ac4: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x303ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x303ac8: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x303ac8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_303acc:
    // 0x303acc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303ACCu;
    {
        const bool branch_taken_0x303acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x303AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303ACCu;
        // 0x303ad0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303acc) {
            ctx->pc = 0x303AE0u;
            goto label_303ae0;
        }
    }
    ctx->pc = 0x303AD4u;
    // 0x303ad4: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x303AD4u;
    {
        const bool branch_taken_0x303ad4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x303AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AD4u;
        // 0x303ad8: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ad4) {
            ctx->pc = 0x303AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303aa0;
        }
    }
    ctx->pc = 0x303ADCu;
label_303adc:
    // 0x303adc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303ae0:
    // 0x303ae0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x303AE0u;
    {
        const bool branch_taken_0x303ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AE0u;
        // 0x303ae4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ae0) {
            ctx->pc = 0x303AF8u;
            goto label_303af8;
        }
    }
    ctx->pc = 0x303AE8u;
label_303ae8:
    // 0x303ae8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x303ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x303aec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x303aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x303af0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x303af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303af4: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x303af4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_303af8:
    // 0x303af8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x303AF8u;
    {
        const bool branch_taken_0x303af8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x303AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AF8u;
        // 0x303afc: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303af8) {
            ctx->pc = 0x303B10u;
            goto label_303b10;
        }
    }
    ctx->pc = 0x303B00u;
    // 0x303b00: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x303b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x303b04: 0xae830080  sw          $v1, 0x80($s4)
    ctx->pc = 0x303b04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 3));
    // 0x303b08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x303B08u;
    {
        const bool branch_taken_0x303b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B08u;
        // 0x303b0c: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b08) {
            ctx->pc = 0x303B14u;
            goto label_303b14;
        }
    }
    ctx->pc = 0x303B10u;
label_303b10:
    // 0x303b10: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x303b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_303b14:
    // 0x303b14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x303b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x303b18: 0x0  nop
    ctx->pc = 0x303b18u;
    // NOP
    // 0x303b1c: 0x0  nop
    ctx->pc = 0x303b1cu;
    // NOP
    // 0x303b20: 0x0  nop
    ctx->pc = 0x303b20u;
    // NOP
    // 0x303b24: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x303B24u;
    {
        const bool branch_taken_0x303b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303b24) {
            ctx->pc = 0x303B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303B24u;
            // 0x303b28: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303b10;
        }
    }
    ctx->pc = 0x303B2Cu;
    // 0x303b2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x303b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x303b30: 0x26a102a  slt         $v0, $s3, $t2
    ctx->pc = 0x303b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x303b34: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x303B34u;
    {
        const bool branch_taken_0x303b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B34u;
        // 0x303b38: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b34) {
            ctx->pc = 0x303A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303a70;
        }
    }
    ctx->pc = 0x303B3Cu;
label_303b3c:
    // 0x303b3c: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x303b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x303b40: 0x2a040000  slti        $a0, $s0, 0x0
    ctx->pc = 0x303b40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x303b44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x303b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b48: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x303b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x303b4c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x303b4cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x303b50: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x303b50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x303b54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x303b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303b58: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x303b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x303b5c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x303b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303b60: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x303b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x303b64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x303b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x303b68: 0x203b021  addu        $s6, $s0, $v1
    ctx->pc = 0x303b68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x303b6c: 0x180802d  daddu       $s0, $t4, $zero
    ctx->pc = 0x303b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b70: 0x261e0004  addiu       $fp, $s0, 0x4
    ctx->pc = 0x303b70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x303b74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x303B74u;
    {
        const bool branch_taken_0x303b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B74u;
        // 0x303b78: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b74) {
            ctx->pc = 0x303B88u;
            goto label_303b88;
        }
    }
    ctx->pc = 0x303B7Cu;
    // 0x303b7c: 0x0  nop
    ctx->pc = 0x303b7cu;
    // NOP
label_303b80:
    // 0x303b80: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x303b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x303b84: 0x0  nop
    ctx->pc = 0x303b84u;
    // NOP
label_303b88:
    // 0x303b88: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x303b88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x303b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x303b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b90: 0x26020038  addiu       $v0, $s0, 0x38
    ctx->pc = 0x303b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x303b94: 0x0  nop
    ctx->pc = 0x303b94u;
    // NOP
    // 0x303b98: 0x12a0fff9  beqz        $s5, . + 4 + (-0x7 << 2)
    ctx->pc = 0x303B98u;
    {
        const bool branch_taken_0x303b98 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x303B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B98u;
        // 0x303b9c: 0x55800a  movz        $s0, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b98) {
            ctx->pc = 0x303B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303b80;
        }
    }
    ctx->pc = 0x303BA0u;
    // 0x303ba0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x303ba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ba4: 0x0  nop
    ctx->pc = 0x303ba4u;
    // NOP
label_303ba8:
    // 0x303ba8: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x303ba8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x303bac: 0x16a000fe  bnez        $s5, . + 4 + (0xFE << 2)
    ctx->pc = 0x303BACu;
    {
        const bool branch_taken_0x303bac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x303BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BACu;
        // 0x303bb0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303bac) {
            ctx->pc = 0x303FA8u;
            goto label_303fa8;
        }
    }
    ctx->pc = 0x303BB4u;
    // 0x303bb4: 0x29c20002  slti        $v0, $t6, 0x2
    ctx->pc = 0x303bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x303bb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x303bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bbc: 0x2606002c  addiu       $a2, $s0, 0x2C
    ctx->pc = 0x303bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x303bc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x303BC0u;
    {
        const bool branch_taken_0x303bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BC0u;
        // 0x303bc4: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303bc0) {
            ctx->pc = 0x303BF0u;
            goto label_303bf0;
        }
    }
    ctx->pc = 0x303BC8u;
    // 0x303bc8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x303bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x303bcc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x303bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x303bd0: 0x504000f6  beql        $v0, $zero, . + 4 + (0xF6 << 2)
    ctx->pc = 0x303BD0u;
    {
        const bool branch_taken_0x303bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303bd0) {
            ctx->pc = 0x303BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303BD0u;
            // 0x303bd4: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303FACu;
            goto label_303fac;
        }
    }
    ctx->pc = 0x303BD8u;
    // 0x303bd8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x303bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x303bdc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x303bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x303be0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x303be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x303be4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x303be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303be8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x303BE8u;
    {
        const bool branch_taken_0x303be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BE8u;
        // 0x303bec: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303be8) {
            ctx->pc = 0x303C54u;
            goto label_303c54;
        }
    }
    ctx->pc = 0x303BF0u;
label_303bf0:
    // 0x303bf0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x303bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x303bf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x303bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bf8: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x303bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x303bfc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x303BFCu;
    {
        const bool branch_taken_0x303bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BFCu;
        // 0x303c00: 0x94ca0002  lhu         $t2, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303bfc) {
            ctx->pc = 0x303C4Cu;
            goto label_303c4c;
        }
    }
    ctx->pc = 0x303C04u;
    // 0x303c04: 0x8e490004  lw          $t1, 0x4($s2)
    ctx->pc = 0x303c04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x303c08: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x303c08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c0c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x303c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_303c10:
    // 0x303c10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x303c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x303c18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x303c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x303c1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x303c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303c20: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x303c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x303c24: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x303c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x303c28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303C28u;
    {
        const bool branch_taken_0x303c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C28u;
        // 0x303c2c: 0x88382a  slt         $a3, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c28) {
            ctx->pc = 0x303C3Cu;
            goto label_303c3c;
        }
    }
    ctx->pc = 0x303C30u;
    // 0x303c30: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x303c30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303c34: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x303c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x303c38: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x303c38u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_303c3c:
    // 0x303c3c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x303C3Cu;
    {
        const bool branch_taken_0x303c3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x303C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C3Cu;
        // 0x303c40: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c3c) {
            ctx->pc = 0x303C50u;
            goto label_303c50;
        }
    }
    ctx->pc = 0x303C44u;
    // 0x303c44: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x303C44u;
    {
        const bool branch_taken_0x303c44 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x303C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C44u;
        // 0x303c48: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c44) {
            ctx->pc = 0x303C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303c10;
        }
    }
    ctx->pc = 0x303C4Cu;
label_303c4c:
    // 0x303c4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303c50:
    // 0x303c50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x303c50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_303c54:
    // 0x303c54: 0x1280002a  beqz        $s4, . + 4 + (0x2A << 2)
    ctx->pc = 0x303C54u;
    {
        const bool branch_taken_0x303c54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x303C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C54u;
        // 0x303c58: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c54) {
            ctx->pc = 0x303D00u;
            goto label_303d00;
        }
    }
    ctx->pc = 0x303C5Cu;
    // 0x303c5c: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x303c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x303c60: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x303c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c64: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x303c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x303c68: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x303c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303c6c: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x303c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x303c70: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x303c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303c74: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x303c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x303c78: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x303c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c7c: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x303c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x303c80: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x303c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303c84: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x303c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x303c88: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x303c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303c8c: 0xe4820040  swc1        $f2, 0x40($a0)
    ctx->pc = 0x303c8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x303c90: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x303c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303c94: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x303c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x303c98: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x303c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c9c: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x303c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x303ca0: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x303ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x303ca4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303CA4u;
    {
        const bool branch_taken_0x303ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x303CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CA4u;
        // 0x303ca8: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ca4) {
            ctx->pc = 0x303CBCu;
            goto label_303cbc;
        }
    }
    ctx->pc = 0x303CACu;
    // 0x303cac: 0x2542ffd9  addiu       $v0, $t2, -0x27
    ctx->pc = 0x303cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967257));
    // 0x303cb0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x303cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x303cb4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x303CB4u;
    {
        const bool branch_taken_0x303cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303cb4) {
            ctx->pc = 0x303CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303CB4u;
            // 0x303cb8: 0xe4820048  swc1        $f2, 0x48($a0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x303CBCu;
            goto label_303cbc;
        }
    }
    ctx->pc = 0x303CBCu;
label_303cbc:
    // 0x303cbc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x303cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303cc0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x303cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x303cc4: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x303cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x303cc8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x303cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303ccc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x303cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x303cd0: 0xe4810050  swc1        $f1, 0x50($a0)
    ctx->pc = 0x303cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x303cd4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x303cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303cd8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x303cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x303cdc: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x303cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x303ce0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x303ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303ce4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x303ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x303ce8: 0x24b00004  addiu       $s0, $a1, 0x4
    ctx->pc = 0x303ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x303cec: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x303cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x303cf0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x303cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x303cf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x303CF4u;
    {
        const bool branch_taken_0x303cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CF4u;
        // 0x303cf8: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303cf4) {
            ctx->pc = 0x303D04u;
            goto label_303d04;
        }
    }
    ctx->pc = 0x303CFCu;
    // 0x303cfc: 0x0  nop
    ctx->pc = 0x303cfcu;
    // NOP
label_303d00:
    // 0x303d00: 0x24b00030  addiu       $s0, $a1, 0x30
    ctx->pc = 0x303d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_303d04:
    // 0x303d04: 0x8e170000  lw          $s7, 0x0($s0)
    ctx->pc = 0x303d04u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x303d08: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x303d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x303d0c: 0x1ae000a4  blez        $s7, . + 4 + (0xA4 << 2)
    ctx->pc = 0x303D0Cu;
    {
        const bool branch_taken_0x303d0c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x303D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D0Cu;
        // 0x303d10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d0c) {
            ctx->pc = 0x303FA0u;
            goto label_303fa0;
        }
    }
    ctx->pc = 0x303D14u;
    // 0x303d14: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x303d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_303d18:
    // 0x303d18: 0x1280009e  beqz        $s4, . + 4 + (0x9E << 2)
    ctx->pc = 0x303D18u;
    {
        const bool branch_taken_0x303d18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x303D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D18u;
        // 0x303d1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d18) {
            ctx->pc = 0x303F94u;
            goto label_303f94;
        }
    }
    ctx->pc = 0x303D20u;
    // 0x303d20: 0x4e0009c  bltz        $a3, . + 4 + (0x9C << 2)
    ctx->pc = 0x303D20u;
    {
        const bool branch_taken_0x303d20 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x303D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D20u;
        // 0x303d24: 0xef102a  slt         $v0, $a3, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d20) {
            ctx->pc = 0x303F94u;
            goto label_303f94;
        }
    }
    ctx->pc = 0x303D28u;
    // 0x303d28: 0x5040009b  beql        $v0, $zero, . + 4 + (0x9B << 2)
    ctx->pc = 0x303D28u;
    {
        const bool branch_taken_0x303d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303d28) {
            ctx->pc = 0x303D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303D28u;
            // 0x303d2c: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303F98u;
            goto label_303f98;
        }
    }
    ctx->pc = 0x303D30u;
    // 0x303d30: 0x76840  sll         $t5, $a3, 1
    ctx->pc = 0x303d30u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x303d34: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x303d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x303d38: 0x1a71021  addu        $v0, $t5, $a3
    ctx->pc = 0x303d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x303d3c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x303d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x303d40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x303d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x303d44: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x303d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x303d48: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x303d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x303d4c: 0x992021  addu        $a0, $a0, $t9
    ctx->pc = 0x303d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x303d50: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x303d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x303d54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x303d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x303d58: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x303d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x303d5c: 0x3c32821  addu        $a1, $fp, $v1
    ctx->pc = 0x303d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x303d60: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x303d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x303d64: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x303d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x303d68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x303d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x303d6c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x303d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x303d70: 0x14430043  bne         $v0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x303D70u;
    {
        const bool branch_taken_0x303d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x303D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D70u;
        // 0x303d74: 0xacc20120  sw          $v0, 0x120($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d70) {
            ctx->pc = 0x303E80u;
            goto label_303e80;
        }
    }
    ctx->pc = 0x303D78u;
    // 0x303d78: 0x29c20003  slti        $v0, $t6, 0x3
    ctx->pc = 0x303d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x303d7c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x303D7Cu;
    {
        const bool branch_taken_0x303d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303d7c) {
            ctx->pc = 0x303D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303D7Cu;
            // 0x303d80: 0x8e490000  lw          $t1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303DA8u;
            goto label_303da8;
        }
    }
    ctx->pc = 0x303D84u;
    // 0x303d84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x303d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x303d88: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x303d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x303d8c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x303d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x303d90: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x303d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x303d94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x303d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303d98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x303d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303d9c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x303d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x303da0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x303DA0u;
    {
        const bool branch_taken_0x303da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303DA0u;
        // 0x303da4: 0x4100a  movz        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303da0) {
            ctx->pc = 0x303E88u;
            goto label_303e88;
        }
    }
    ctx->pc = 0x303DA8u;
label_303da8:
    // 0x303da8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303dac: 0x19200014  blez        $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x303DACu;
    {
        const bool branch_taken_0x303dac = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x303DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303DACu;
        // 0x303db0: 0x8cac0000  lw          $t4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303dac) {
            ctx->pc = 0x303E00u;
            goto label_303e00;
        }
    }
    ctx->pc = 0x303DB4u;
    // 0x303db4: 0x8e4b0004  lw          $t3, 0x4($s2)
    ctx->pc = 0x303db4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x303db8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x303db8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303dbc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x303dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_303dc0:
    // 0x303dc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x303dc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303dc4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x303dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x303dc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x303dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x303dcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x303dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303dd0: 0x1621821  addu        $v1, $t3, $v0
    ctx->pc = 0x303dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x303dd4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x303dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x303dd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303DD8u;
    {
        const bool branch_taken_0x303dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303DD8u;
        // 0x303ddc: 0xca202a  slt         $a0, $a2, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303dd8) {
            ctx->pc = 0x303DECu;
            goto label_303dec;
        }
    }
    ctx->pc = 0x303DE0u;
    // 0x303de0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x303de0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303de4: 0x4c1026  xor         $v0, $v0, $t4
    ctx->pc = 0x303de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 12));
    // 0x303de8: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x303de8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_303dec:
    // 0x303dec: 0x55000004  bnel        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x303DECu;
    {
        const bool branch_taken_0x303dec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x303dec) {
            ctx->pc = 0x303DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303DECu;
            // 0x303df0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303E00u;
            goto label_303e00;
        }
    }
    ctx->pc = 0x303DF4u;
    // 0x303df4: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x303DF4u;
    {
        const bool branch_taken_0x303df4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x303DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303DF4u;
        // 0x303df8: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303df4) {
            ctx->pc = 0x303DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303dc0;
        }
    }
    ctx->pc = 0x303DFCu;
    // 0x303dfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303e00:
    // 0x303e00: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x303E00u;
    {
        const bool branch_taken_0x303e00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x303E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E00u;
        // 0x303e04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e00) {
            ctx->pc = 0x303E60u;
            goto label_303e60;
        }
    }
    ctx->pc = 0x303E08u;
    // 0x303e08: 0x1a71021  addu        $v0, $t5, $a3
    ctx->pc = 0x303e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x303e0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x303e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x303e10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x303e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x303e14: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x303e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x303e18: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x303e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x303e1c: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x303E1Cu;
    {
        const bool branch_taken_0x303e1c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x303E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E1Cu;
        // 0x303e20: 0x565021  addu        $t2, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e1c) {
            ctx->pc = 0x303E54u;
            goto label_303e54;
        }
    }
    ctx->pc = 0x303E24u;
    // 0x303e24: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x303e24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x303e28: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x303e28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e2c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x303e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_303e30:
    // 0x303e30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x303e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x303e34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x303e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303e38: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x303e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x303e3c: 0x10460006  beq         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x303E3Cu;
    {
        const bool branch_taken_0x303e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x303E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E3Cu;
        // 0x303e40: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e3c) {
            ctx->pc = 0x303E58u;
            goto label_303e58;
        }
    }
    ctx->pc = 0x303E44u;
    // 0x303e44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x303e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x303e48: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x303e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x303e4c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x303E4Cu;
    {
        const bool branch_taken_0x303e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303e4c) {
            ctx->pc = 0x303E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303E4Cu;
            // 0x303e50: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303e30;
        }
    }
    ctx->pc = 0x303E54u;
label_303e54:
    // 0x303e54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303e58:
    // 0x303e58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x303E58u;
    {
        const bool branch_taken_0x303e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E58u;
        // 0x303e5c: 0xad420124  sw          $v0, 0x124($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e58) {
            ctx->pc = 0x303E78u;
            goto label_303e78;
        }
    }
    ctx->pc = 0x303E60u;
label_303e60:
    // 0x303e60: 0x1a71021  addu        $v0, $t5, $a3
    ctx->pc = 0x303e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x303e64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x303e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x303e68: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x303e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x303e6c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x303e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x303e70: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x303e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x303e74: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x303e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
label_303e78:
    // 0x303e78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x303E78u;
    {
        const bool branch_taken_0x303e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E78u;
        // 0x303e7c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e78) {
            ctx->pc = 0x303E8Cu;
            goto label_303e8c;
        }
    }
    ctx->pc = 0x303E80u;
label_303e80:
    // 0x303e80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x303e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x303e84: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x303e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_303e88:
    // 0x303e88: 0xacc20124  sw          $v0, 0x124($a2)
    ctx->pc = 0x303e88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 292), GPR_U32(ctx, 2));
label_303e8c:
    // 0x303e8c: 0x1a71021  addu        $v0, $t5, $a3
    ctx->pc = 0x303e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x303e90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x303e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x303e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x303e98: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x303e98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e9c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x303e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x303ea0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x303ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x303ea4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x303ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x303ea8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x303ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x303eac: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x303eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x303eb0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x303eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x303eb4: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x303eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_303eb8:
    // 0x303eb8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x303eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303ebc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x303ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x303ec0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x303ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x303ec4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x303ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x303ec8: 0x0  nop
    ctx->pc = 0x303ec8u;
    // NOP
    // 0x303ecc: 0x14a6fffa  bne         $a1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x303ECCu;
    {
        const bool branch_taken_0x303ecc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x303ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303ECCu;
        // 0x303ed0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ecc) {
            ctx->pc = 0x303EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303eb8;
        }
    }
    ctx->pc = 0x303ED4u;
    // 0x303ed4: 0x1a71021  addu        $v0, $t5, $a3
    ctx->pc = 0x303ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x303ed8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x303ed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303edc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x303edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x303ee0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x303ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x303ee4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x303ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x303ee8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x303ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x303eec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x303eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x303ef0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x303ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x303ef4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x303ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x303ef8: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x303ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x303efc: 0x0  nop
    ctx->pc = 0x303efcu;
    // NOP
label_303f00:
    // 0x303f00: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x303f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303f04: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x303f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x303f08: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x303f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x303f0c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x303f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x303f10: 0x0  nop
    ctx->pc = 0x303f10u;
    // NOP
    // 0x303f14: 0x14a6fffa  bne         $a1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x303F14u;
    {
        const bool branch_taken_0x303f14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x303F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F14u;
        // 0x303f18: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f14) {
            ctx->pc = 0x303F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303f00;
        }
    }
    ctx->pc = 0x303F1Cu;
    // 0x303f1c: 0x1a71021  addu        $v0, $t5, $a3
    ctx->pc = 0x303f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x303f20: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x303f20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303f24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x303f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x303f28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x303f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x303f2c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x303f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x303f30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x303f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x303f34: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x303f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x303f38: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x303f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x303f3c: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x303f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
label_303f40:
    // 0x303f40: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x303f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303f44: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x303f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x303f48: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x303f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x303f4c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x303f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x303f50: 0x0  nop
    ctx->pc = 0x303f50u;
    // NOP
    // 0x303f54: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x303F54u;
    {
        const bool branch_taken_0x303f54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x303F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F54u;
        // 0x303f58: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f54) {
            ctx->pc = 0x303F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303f40;
        }
    }
    ctx->pc = 0x303F5Cu;
    // 0x303f5c: 0x1a72021  addu        $a0, $t5, $a3
    ctx->pc = 0x303f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x303f60: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x303f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x303f64: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x303f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x303f68: 0x7fae00e0  sq          $t6, 0xE0($sp)
    ctx->pc = 0x303f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 14));
    // 0x303f6c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x303f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x303f70: 0x7faf00f0  sq          $t7, 0xF0($sp)
    ctx->pc = 0x303f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 15));
    // 0x303f74: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x303f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x303f78: 0x7fb90100  sq          $t9, 0x100($sp)
    ctx->pc = 0x303f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 25));
    // 0x303f7c: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x303f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x303f80: 0xc0b57a8  jal         func_2D5EA0
    ctx->pc = 0x303F80u;
    SET_GPR_U32(ctx, 31, 0x303F88u);
    ctx->pc = 0x303F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303F80u;
    // 0x303f84: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5EA0u, 0x303F80u, 0x303F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F88u;
label_303f88:
    // 0x303f88: 0x7bb90100  lq          $t9, 0x100($sp)
    ctx->pc = 0x303f88u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x303f8c: 0x7baf00f0  lq          $t7, 0xF0($sp)
    ctx->pc = 0x303f8cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x303f90: 0x7bae00e0  lq          $t6, 0xE0($sp)
    ctx->pc = 0x303f90u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_303f94:
    // 0x303f94: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x303f94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_303f98:
    // 0x303f98: 0x5ee0ff5f  bgtzl       $s7, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x303F98u;
    {
        const bool branch_taken_0x303f98 = (GPR_S32(ctx, 23) > 0);
        if (branch_taken_0x303f98) {
            ctx->pc = 0x303F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303F98u;
            // 0x303f9c: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303d18;
        }
    }
    ctx->pc = 0x303FA0u;
label_303fa0:
    // 0x303fa0: 0x12a0ff01  beqz        $s5, . + 4 + (-0xFF << 2)
    ctx->pc = 0x303FA0u;
    {
        const bool branch_taken_0x303fa0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x303FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FA0u;
        // 0x303fa4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fa0) {
            ctx->pc = 0x303BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303ba8;
        }
    }
    ctx->pc = 0x303FA8u;
label_303fa8:
    // 0x303fa8: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x303fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_303fac:
    // 0x303fac: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x303facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x303fb0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x303fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x303fb4: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x303fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x303fb8: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x303fb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x303fbc: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x303fbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x303fc0: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x303fc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x303fc4: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x303fc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x303fc8: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x303fc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x303fcc: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x303fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x303fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x303FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FD0u;
        // 0x303fd4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303FD8u;
}
