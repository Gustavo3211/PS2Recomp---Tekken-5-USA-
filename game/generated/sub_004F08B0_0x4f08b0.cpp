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

// Function: sub_004F08B0
// Address: 0x4f08b0 - 0x4f16d8
void sub_004F08B0_0x4f08b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F08B0_0x4f08b0");
#endif

    switch (ctx->pc) {
        case 0x4f08ccu: goto label_4f08cc;
        case 0x4f08e8u: goto label_4f08e8;
        case 0x4f0ac8u: goto label_4f0ac8;
        case 0x4f0b0cu: goto label_4f0b0c;
        case 0x4f0e3cu: goto label_4f0e3c;
        case 0x4f0e4cu: goto label_4f0e4c;
        case 0x4f0f34u: goto label_4f0f34;
        case 0x4f0f3cu: goto label_4f0f3c;
        case 0x4f0f44u: goto label_4f0f44;
        case 0x4f1000u: goto label_4f1000;
        case 0x4f1008u: goto label_4f1008;
        case 0x4f1010u: goto label_4f1010;
        case 0x4f14e4u: goto label_4f14e4;
        case 0x4f1528u: goto label_4f1528;
        case 0x4f15b0u: goto label_4f15b0;
        case 0x4f162cu: goto label_4f162c;
        case 0x4f1634u: goto label_4f1634;
        case 0x4f1650u: goto label_4f1650;
        case 0x4f1678u: goto label_4f1678;
        case 0x4f1680u: goto label_4f1680;
        case 0x4f1688u: goto label_4f1688;
        case 0x4f1690u: goto label_4f1690;
        case 0x4f16a0u: goto label_4f16a0;
        case 0x4f16b0u: goto label_4f16b0;
        default: break;
    }

    ctx->pc = 0x4f08b0u;

    // 0x4f08b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f08b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f08b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f08b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f08b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f08b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f08bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f08bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f08c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f08c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f08c4: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F08C4u;
    SET_GPR_U32(ctx, 31, 0x4F08CCu);
    ctx->pc = 0x4F08C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F08C4u;
    // 0x4f08c8: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F08C4u, 0x4F08CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F08CCu;
label_4f08cc:
    // 0x4f08cc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f08d0: 0xac62122c  sw          $v0, 0x122C($v1)
    ctx->pc = 0x4f08d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F122Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F122Cu, _value); } while (0);
    // 0x4f08d4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f08d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f08d8: 0x4420014  bltzl       $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4F08D8u;
    {
        const bool branch_taken_0x4f08d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f08d8) {
            ctx->pc = 0x4F08DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F08D8u;
            // 0x4f08dc: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F092Cu;
            goto label_4f092c;
        }
    }
    ctx->pc = 0x4F08E0u;
    // 0x4f08e0: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F08E0u;
    SET_GPR_U32(ctx, 31, 0x4F08E8u);
    ctx->pc = 0x4F08E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F08E0u;
    // 0x4f08e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F08E0u, 0x4F08E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F08E8u;
label_4f08e8:
    // 0x4f08e8: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4f08e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f08ec: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x4f08ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x4f08f0: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x4f08f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x4f08f4: 0x96040012  lhu         $a0, 0x12($s0)
    ctx->pc = 0x4f08f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4f08f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f08f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f08fc: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x4f08fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x4f0900: 0xa6040164  sh          $a0, 0x164($s0)
    ctx->pc = 0x4f0900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f0904: 0xa6030166  sh          $v1, 0x166($s0)
    ctx->pc = 0x4f0904u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f0908: 0xa6020168  sh          $v0, 0x168($s0)
    ctx->pc = 0x4f0908u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f090c: 0xa606014a  sh          $a2, 0x14A($s0)
    ctx->pc = 0x4f090cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 6));
    // 0x4f0910: 0xa60501b6  sh          $a1, 0x1B6($s0)
    ctx->pc = 0x4f0910u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f0914: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4f0914u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f0918: 0xa600011a  sh          $zero, 0x11A($s0)
    ctx->pc = 0x4f0918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 282), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f091c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f091cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0920: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f0920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f0924: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f0924u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f0928: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4f0928u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4f092c:
    // 0x4f092c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f092cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f0930: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f0930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f0934: 0x22443  sra         $a0, $v0, 17
    ctx->pc = 0x4f0934u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f0938: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4F0938u;
    {
        const bool branch_taken_0x4f0938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4F093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0938u;
        // 0x4f093c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0938) {
            ctx->pc = 0x4F0980u;
            goto label_4f0980;
        }
    }
    ctx->pc = 0x4F0940u;
    // 0x4f0940: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F0940u;
    {
        const bool branch_taken_0x4f0940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0940) {
            ctx->pc = 0x4F0944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0940u;
            // 0x4f0944: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0958u;
            goto label_4f0958;
        }
    }
    ctx->pc = 0x4F0948u;
    // 0x4f0948: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F0948u;
    {
        const bool branch_taken_0x4f0948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0948u;
        // 0x4f094c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0948) {
            ctx->pc = 0x4F0968u;
            goto label_4f0968;
        }
    }
    ctx->pc = 0x4F0950u;
    // 0x4f0950: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4F0950u;
    {
        const bool branch_taken_0x4f0950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0950u;
        // 0x4f0954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0950) {
            ctx->pc = 0x4F09B0u;
            goto label_4f09b0;
        }
    }
    ctx->pc = 0x4F0958u;
label_4f0958:
    // 0x4f0958: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4F0958u;
    {
        const bool branch_taken_0x4f0958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0958u;
        // 0x4f095c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0958) {
            ctx->pc = 0x4F0998u;
            goto label_4f0998;
        }
    }
    ctx->pc = 0x4F0960u;
    // 0x4f0960: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4F0960u;
    {
        const bool branch_taken_0x4f0960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0960u;
        // 0x4f0964: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0960) {
            ctx->pc = 0x4F09B0u;
            goto label_4f09b0;
        }
    }
    ctx->pc = 0x4F0968u;
label_4f0968:
    // 0x4f0968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f0968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f096c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f096cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f0970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f0970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f0974: 0x813c270  j           func_4F09C0
    ctx->pc = 0x4F0974u;
    ctx->pc = 0x4F0978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0974u;
    // 0x4f0978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F09C0u;
    goto label_4f09c0;
    ctx->pc = 0x4F097Cu;
    // 0x4f097c: 0x0  nop
    ctx->pc = 0x4f097cu;
    // NOP
label_4f0980:
    // 0x4f0980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f0980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f0984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0988: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f0988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f098c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f0990: 0x813c31a  j           func_4F0C68
    ctx->pc = 0x4F0990u;
    ctx->pc = 0x4F0994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0990u;
    // 0x4f0994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0C68u;
    goto label_4f0c68;
    ctx->pc = 0x4F0998u;
label_4f0998:
    // 0x4f0998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f0998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f099c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f099cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f09a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f09a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f09a4: 0x813c39e  j           func_4F0E78
    ctx->pc = 0x4F09A4u;
    ctx->pc = 0x4F09A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F09A4u;
    // 0x4f09a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0E78u;
    goto label_4f0e78;
    ctx->pc = 0x4F09ACu;
    // 0x4f09ac: 0x0  nop
    ctx->pc = 0x4f09acu;
    // NOP
label_4f09b0:
    // 0x4f09b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f09b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f09b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f09b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f09b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F09B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F09B8u;
        // 0x4f09bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F09B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F09C0u;
label_4f09c0:
    // 0x4f09c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f09c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f09c4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4f09c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4f09c8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4f09c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f09cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f09ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f09d0: 0x26e2014a  addiu       $v0, $s7, 0x14A
    ctx->pc = 0x4f09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 330));
    // 0x4f09d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f09d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f09d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f09d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f09dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f09dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f09e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f09e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f09e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f09e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f09e8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4f09e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4f09ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f09ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4f09f0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f09f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f09f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f09f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f09f8: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x4f09f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f09fc: 0x480008a  bltz        $a0, . + 4 + (0x8A << 2)
    ctx->pc = 0x4F09FCu;
    {
        const bool branch_taken_0x4f09fc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4F0A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F09FCu;
        // 0x4f0a00: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f09fc) {
            ctx->pc = 0x4F0C28u;
            goto label_4f0c28;
        }
    }
    ctx->pc = 0x4F0A04u;
    // 0x4f0a04: 0x8ee80140  lw          $t0, 0x140($s7)
    ctx->pc = 0x4f0a04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 320)));
    // 0x4f0a08: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4f0a08u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4f0a0c: 0x26d61228  addiu       $s6, $s6, 0x1228
    ctx->pc = 0x4f0a0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4648));
    // 0x4f0a10: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4f0a10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4f0a14: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x4f0a14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x7F1228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1228u, _value); } while (0);
    // 0x4f0a18: 0x2631121c  addiu       $s1, $s1, 0x121C
    ctx->pc = 0x4f0a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4636));
    // 0x4f0a1c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f0a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f0a20: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4f0a20u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4f0a24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4f0a24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F121Cu));
    // 0x4f0a28: 0x26b51220  addiu       $s5, $s5, 0x1220
    ctx->pc = 0x4f0a28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4640));
    // 0x4f0a2c: 0x86e20164  lh          $v0, 0x164($s7)
    ctx->pc = 0x4f0a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 356)));
    // 0x4f0a30: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4f0a30u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4f0a34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0a38: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4f0a38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F1220u));
    // 0x4f0a3c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f0a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f0a40: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4f0a40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4f0a44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0a48: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f0a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f0a4c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4f0a50: 0x26731224  addiu       $s3, $s3, 0x1224
    ctx->pc = 0x4f0a50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4644));
    // 0x4f0a54: 0x26521210  addiu       $s2, $s2, 0x1210
    ctx->pc = 0x4f0a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4624));
    // 0x4f0a58: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4f0a58u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4f0a5c: 0x86e20166  lh          $v0, 0x166($s7)
    ctx->pc = 0x4f0a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 358)));
    // 0x4f0a60: 0x26941214  addiu       $s4, $s4, 0x1214
    ctx->pc = 0x4f0a60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4628));
    // 0x4f0a64: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4f0a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f0a68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4f0a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0a6c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f0a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f0a70: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4f0a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f0a74: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f0a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f0a78: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f0a78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f0a7c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4f0a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4f0a80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4f0a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0a84: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f0a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f0a88: 0x86e20168  lh          $v0, 0x168($s7)
    ctx->pc = 0x4f0a88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 360)));
    // 0x4f0a8c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4f0a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f0a90: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f0a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f0a94: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4f0a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4f0a98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0a9c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4f0a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4f0aa0: 0x85020022  lh          $v0, 0x22($t0)
    ctx->pc = 0x4f0aa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 34)));
    // 0x4f0aa4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f0aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f0aa8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f0aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f0aac: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4f0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4f0ab0: 0x85020024  lh          $v0, 0x24($t0)
    ctx->pc = 0x4f0ab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x4f0ab4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f0ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f0ab8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0abc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4f0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4f0ac0: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4F0AC0u;
    SET_GPR_U32(ctx, 31, 0x4F0AC8u);
    ctx->pc = 0x4F0AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0AC0u;
    // 0x4f0ac4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4F0AC0u, 0x4F0AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0AC8u;
label_4f0ac8:
    // 0x4f0ac8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4f0ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f0acc: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4f0accu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f0ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f0ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0ad4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f0ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f0ad8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4f0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f0adc: 0x84e20026  lh          $v0, 0x26($a3)
    ctx->pc = 0x4f0adcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x4f0ae0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4f0ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0ae4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0ae8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f0ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f0aec: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f0aecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f0af0: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4f0af0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4f0af4: 0x84e20028  lh          $v0, 0x28($a3)
    ctx->pc = 0x4f0af4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x4f0af8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f0af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f0afc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0b00: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4f0b00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4f0b04: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4F0B04u;
    SET_GPR_U32(ctx, 31, 0x4F0B0Cu);
    ctx->pc = 0x4F0B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0B04u;
    // 0x4f0b08: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4F0B04u, 0x4F0B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0B0Cu;
label_4f0b0c:
    // 0x4f0b0c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4f0b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0b10: 0x8ec90000  lw          $t1, 0x0($s6)
    ctx->pc = 0x4f0b10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f0b14: 0x26ea0010  addiu       $t2, $s7, 0x10
    ctx->pc = 0x4f0b14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x4f0b18: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f0b18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0b1c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f0b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f0b20: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x4f0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4f0b24: 0x26eb0014  addiu       $t3, $s7, 0x14
    ctx->pc = 0x4f0b24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x4f0b28: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4f0b28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f0b2c: 0x26ec0018  addiu       $t4, $s7, 0x18
    ctx->pc = 0x4f0b2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x4f0b30: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f0b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f0b34: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4f0b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f0b38: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f0b38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f0b3c: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x4f0b3cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f0b40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f0b44: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4f0b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f0b48: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f0b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f0b4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f0b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f0b50: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f0b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f0b54: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f0b54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f0b58: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4f0b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4f0b5c: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x4f0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x4f0b60: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4f0b60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0b64: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f0b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f0b68: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f0b68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f0b6c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f0b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f0b70: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4f0b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4f0b74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0b78: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4f0b78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4f0b7c: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4f0b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4f0b80: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4f0b80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4f0b84: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x4f0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x4f0b88: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4f0b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4f0b8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f0b8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f0b90: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4f0b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4f0b94: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4f0b94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x4f0b98: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4f0b98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4f0b9c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4f0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4f0ba0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4f0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f0ba4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f0ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f0ba8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f0ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f0bac: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4f0bacu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4f0bb0: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4f0bb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f0bb4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4f0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f0bb8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f0bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f0bbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0bc0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f0bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f0bc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f0bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f0bc8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4f0bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4f0bcc: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4f0bccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f0bd0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4f0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f0bd4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f0bd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0bdc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f0bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f0be0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f0be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f0be4: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4f0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4f0be8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4f0be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f0bec: 0x846201b4  lh          $v0, 0x1B4($v1)
    ctx->pc = 0x4f0becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x4f0bf0: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4F0BF0u;
    {
        const bool branch_taken_0x4f0bf0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4f0bf0) {
            ctx->pc = 0x4F0BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0BF0u;
            // 0x4f0bf4: 0x26e301bc  addiu       $v1, $s7, 0x1BC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 444));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0C2Cu;
            goto label_4f0c2c;
        }
    }
    ctx->pc = 0x4F0BF8u;
    // 0x4f0bf8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4f0bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0bfc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f0bfcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f0c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f0c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0c04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f0c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f0c08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f0c08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f0c0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f0c0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f0c10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f0c10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f0c14: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f0c14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f0c18: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f0c18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f0c1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f0c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f0c20: 0x813c44e  j           func_4F1138
    ctx->pc = 0x4F0C20u;
    ctx->pc = 0x4F0C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0C20u;
    // 0x4f0c24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1138u;
    goto label_4f1138;
    ctx->pc = 0x4F0C28u;
label_4f0c28:
    // 0x4f0c28: 0x26e301bc  addiu       $v1, $s7, 0x1BC
    ctx->pc = 0x4f0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 444));
label_4f0c2c:
    // 0x4f0c2c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4f0c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0c30: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f0c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f0c34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f0c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0c38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f0c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f0c3c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f0c40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f0c40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f0c44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f0c44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f0c48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f0c48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f0c4c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f0c4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f0c50: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f0c50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f0c54: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f0c54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f0c58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f0c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f0c5c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f0c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f0c60: 0x813c31a  j           func_4F0C68
    ctx->pc = 0x4F0C60u;
    ctx->pc = 0x4F0C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0C60u;
    // 0x4f0c64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0C68u;
    goto label_4f0c68;
    ctx->pc = 0x4F0C68u;
label_4f0c68:
    // 0x4f0c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f0c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f0c6c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4f0c6cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4f0c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f0c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f0c74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f0c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0c78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f0c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f0c7c: 0x258c121c  addiu       $t4, $t4, 0x121C
    ctx->pc = 0x4f0c7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4636));
    // 0x4f0c80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f0c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f0c84: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4f0c84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4f0c88: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4f0c88u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4f0c8c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4f0c8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4f0c90: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4f0c90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F121Cu));
    // 0x4f0c94: 0x256b1220  addiu       $t3, $t3, 0x1220
    ctx->pc = 0x4f0c94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4640));
    // 0x4f0c98: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x4f0c98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4f0c9c: 0x254a1224  addiu       $t2, $t2, 0x1224
    ctx->pc = 0x4f0c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4644));
    // 0x4f0ca0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0ca4: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4f0ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F1220u));
    // 0x4f0ca8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f0ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f0cac: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4f0cacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4f0cb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0cb4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f0cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f0cb8: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4f0cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4f0cbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0cc0: 0x3c0d0073  lui         $t5, 0x73
    ctx->pc = 0x4f0cc0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)115 << 16));
    // 0x4f0cc4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4f0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4f0cc8: 0x25add680  addiu       $t5, $t5, -0x2980
    ctx->pc = 0x4f0cc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956672));
    // 0x4f0ccc: 0x8cce122c  lw          $t6, 0x122C($a2)
    ctx->pc = 0x4f0cccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4652)));
    // 0x4f0cd0: 0x25af2494  addiu       $t7, $t5, 0x2494
    ctx->pc = 0x4f0cd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 9364));
    // 0x4f0cd4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f0cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f0cd8: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x4f0cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f0cdc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f0cdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f0ce0: 0x85870000  lh          $a3, 0x0($t4)
    ctx->pc = 0x4f0ce0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f0ce4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f0ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f0ce8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f0ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f0cec: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f0cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f0cf0: 0x25b1249c  addiu       $s1, $t5, 0x249C
    ctx->pc = 0x4f0cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), 9372));
    // 0x4f0cf4: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4f0cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4f0cf8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f0cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f0cfc: 0x25ad2498  addiu       $t5, $t5, 0x2498
    ctx->pc = 0x4f0cfcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 9368));
    // 0x4f0d00: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4f0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4f0d04: 0x85690000  lh          $t1, 0x0($t3)
    ctx->pc = 0x4f0d04u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f0d08: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f0d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f0d0c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f0d0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f0d10: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f0d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f0d14: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f0d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f0d18: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4f0d18u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4f0d1c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f0d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f0d20: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4f0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4f0d24: 0x85460000  lh          $a2, 0x0($t2)
    ctx->pc = 0x4f0d24u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f0d28: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f0d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f0d2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f0d2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f0d30: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4f0d30u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4f0d34: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x4f0d34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4f0d38: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4f0d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4f0d3c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4f0d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4f0d40: 0x8dc20004  lw          $v0, 0x4($t6)
    ctx->pc = 0x4f0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x4f0d44: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4f0d44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f0d48: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f0d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f0d4c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f0d4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f0d50: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4f0d50u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4f0d54: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x4f0d54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x4f0d58: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x4f0d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x4f0d5c: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4f0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4f0d60: 0x8dc20008  lw          $v0, 0x8($t6)
    ctx->pc = 0x4f0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x4f0d64: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f0d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4f0d68: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f0d68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f0d6c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4f0d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4f0d70: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x4f0d70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x4f0d74: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4f0d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4f0d78: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4f0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4f0d7c: 0xa6030130  sh          $v1, 0x130($s0)
    ctx->pc = 0x4f0d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f0d80: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4f0d80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f0d84: 0xa6020132  sh          $v0, 0x132($s0)
    ctx->pc = 0x4f0d84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f0d88: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x4f0d88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f0d8c: 0xa6030134  sh          $v1, 0x134($s0)
    ctx->pc = 0x4f0d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f0d90: 0x85850000  lh          $a1, 0x0($t4)
    ctx->pc = 0x4f0d90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f0d94: 0x85660000  lh          $a2, 0x0($t3)
    ctx->pc = 0x4f0d94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f0d98: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4f0d98u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f0d9c: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4f0d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4f0da0: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4f0da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f0da4: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4f0da4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4f0da8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4f0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f0dac: 0x73823  negu        $a3, $a3
    ctx->pc = 0x4f0dacu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x4f0db0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4f0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f0db4: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4f0db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4f0db8: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x4f0db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x4f0dbc: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x4f0dbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4f0dc0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f0dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f0dc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0dc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f0dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f0dcc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4f0dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4f0dd0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4f0dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4f0dd4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f0dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f0dd8: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4f0dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4f0ddc: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4f0ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4f0de0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4f0de0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4f0de4: 0x95850000  lhu         $a1, 0x0($t4)
    ctx->pc = 0x4f0de4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f0de8: 0x95660000  lhu         $a2, 0x0($t3)
    ctx->pc = 0x4f0de8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f0dec: 0x95470000  lhu         $a3, 0x0($t2)
    ctx->pc = 0x4f0decu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f0df0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4f0df0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f0df4: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x4f0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4f0df8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4f0df8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4f0dfc: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4f0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4f0e00: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4f0e00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4f0e04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0e08: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4f0e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4f0e0c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f0e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f0e10: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f0e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f0e14: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f0e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f0e18: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f0e18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f0e1c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f0e1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f0e20: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4f0e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4f0e24: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4f0e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4f0e28: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4f0e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4f0e2c: 0xade40000  sw          $a0, 0x0($t7)
    ctx->pc = 0x4f0e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
    // 0x4f0e30: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4f0e30u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4f0e34: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4F0E34u;
    SET_GPR_U32(ctx, 31, 0x4F0E3Cu);
    ctx->pc = 0x4F0E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0E34u;
    // 0x4f0e38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4F0E34u, 0x4F0E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0E3Cu;
label_4f0e3c:
    // 0x4f0e3c: 0x24022800  addiu       $v0, $zero, 0x2800
    ctx->pc = 0x4f0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x4f0e40: 0xa602015a  sh          $v0, 0x15A($s0)
    ctx->pc = 0x4f0e40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f0e44: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4F0E44u;
    SET_GPR_U32(ctx, 31, 0x4F0E4Cu);
    ctx->pc = 0x4F0E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0E44u;
    // 0x4f0e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4F0E44u, 0x4F0E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0E4Cu;
label_4f0e4c:
    // 0x4f0e4c: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4f0e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4f0e50: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f0e50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f0e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f0e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0e58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f0e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f0e5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f0e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0e60: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f0e64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f0e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f0e68: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f0e68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f0e6c: 0x813c39e  j           func_4F0E78
    ctx->pc = 0x4F0E6Cu;
    ctx->pc = 0x4F0E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0E6Cu;
    // 0x4f0e70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0E78u;
    goto label_4f0e78;
    ctx->pc = 0x4F0E74u;
    // 0x4f0e74: 0x0  nop
    ctx->pc = 0x4f0e74u;
    // NOP
label_4f0e78:
    // 0x4f0e78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f0e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4f0e7c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4f0e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4f0e80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4f0e80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0e84: 0x26820130  addiu       $v0, $s4, 0x130
    ctx->pc = 0x4f0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 304));
    // 0x4f0e88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4f0e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4f0e8c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4f0e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4f0e90: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4f0e90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4f0e94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4f0e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4f0e98: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4f0e98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4f0e9c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4f0e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4f0ea0: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4f0ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4f0ea4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4f0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4f0ea8: 0x26950010  addiu       $s5, $s4, 0x10
    ctx->pc = 0x4f0ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4f0eac: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4f0eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4f0eb0: 0x26960014  addiu       $s6, $s4, 0x14
    ctx->pc = 0x4f0eb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4f0eb4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4f0eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4f0eb8: 0x26970018  addiu       $s7, $s4, 0x18
    ctx->pc = 0x4f0eb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x4f0ebc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4f0ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4f0ec0: 0x269e0134  addiu       $fp, $s4, 0x134
    ctx->pc = 0x4f0ec0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 308));
    // 0x4f0ec4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4f0ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4f0ec8: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4f0ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4f0ecc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4f0eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4f0ed0: 0x2610121c  addiu       $s0, $s0, 0x121C
    ctx->pc = 0x4f0ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4636));
    // 0x4f0ed4: 0x26840132  addiu       $a0, $s4, 0x132
    ctx->pc = 0x4f0ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 306));
    // 0x4f0ed8: 0x26731220  addiu       $s3, $s3, 0x1220
    ctx->pc = 0x4f0ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4640));
    // 0x4f0edc: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4f0edcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f0ee0: 0x26521224  addiu       $s2, $s2, 0x1224
    ctx->pc = 0x4f0ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4644));
    // 0x4f0ee4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F121Cu));
    // 0x4f0ee8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4f0ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4f0eec: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x4f0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x4f0ef0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f0ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f0ef4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f0ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f0ef8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4f0ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f0efc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f0f00: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f0f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f0f04: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4f0f04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f0f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f0f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0f0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4f0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f0f10: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f0f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f0f14: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f0f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f0f18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0f1c: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4f0f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4f0f20: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4f0f20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4f0f24: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f0f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f0f28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0f2c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F0F2Cu;
    SET_GPR_U32(ctx, 31, 0x4F0F34u);
    ctx->pc = 0x4F0F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0F2Cu;
    // 0x4f0f30: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F0F2Cu, 0x4F0F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0F34u;
label_4f0f34:
    // 0x4f0f34: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F0F34u;
    SET_GPR_U32(ctx, 31, 0x4F0F3Cu);
    ctx->pc = 0x4F0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0F34u;
    // 0x4f0f38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F0F34u, 0x4F0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0F3Cu;
label_4f0f3c:
    // 0x4f0f3c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F0F3Cu;
    SET_GPR_U32(ctx, 31, 0x4F0F44u);
    ctx->pc = 0x4F0F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0F3Cu;
    // 0x4f0f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F0F3Cu, 0x4F0F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0F44u;
label_4f0f44:
    // 0x4f0f44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f0f48: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4f0f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f0f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f0f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0f50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0f54: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4f0f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f0f58: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f0f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f0f5c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4f0f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f0f60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0f64: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f0f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f0f68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f0f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f0f6c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f0f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f0f70: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4f0f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f0f74: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f0f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f0f78: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f0f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f0f7c: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4f0f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4f0f80: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4f0f80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4f0f84: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f0f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f0f88: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f0f88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f0f8c: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4f0f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4f0f90: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x4f0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x4f0f94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f0f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f0f98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f0f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f0f9c: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x4f0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
    // 0x4f0fa0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4f0fa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f0fa4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4f0fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f0fa8: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4f0fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4f0fac: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4f0facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4f0fb0: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x4f0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x4f0fb4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4f0fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4f0fb8: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4f0fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4f0fbc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f0fc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f0fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f0fc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f0fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f0fc8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4f0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4f0fcc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4f0fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f0fd0: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4f0fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f0fd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0fd8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f0fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f0fdc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0fe0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4f0fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4f0fe4: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4f0fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4f0fe8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4f0fe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f0fec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f0fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f0ff0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f0ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f0ff4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f0ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f0ff8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F0FF8u;
    SET_GPR_U32(ctx, 31, 0x4F1000u);
    ctx->pc = 0x4F0FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0FF8u;
    // 0x4f0ffc: 0xaee50000  sw          $a1, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F0FF8u, 0x4F1000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1000u;
label_4f1000:
    // 0x4f1000: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F1000u;
    SET_GPR_U32(ctx, 31, 0x4F1008u);
    ctx->pc = 0x4F1004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1000u;
    // 0x4f1004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F1000u, 0x4F1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1008u;
label_4f1008:
    // 0x4f1008: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F1008u;
    SET_GPR_U32(ctx, 31, 0x4F1010u);
    ctx->pc = 0x4F100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1008u;
    // 0x4f100c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F1008u, 0x4F1010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1010u;
label_4f1010:
    // 0x4f1010: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4f1010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1014: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4f1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1018: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4f1018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4f101c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4f101cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1020: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4f1020u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f1024: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4f1024u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f1028: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4f1028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4f102c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4f102cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f1030: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4f1030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4f1034: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f1034u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f1038: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4f1038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f103c: 0xa7c30000  sh          $v1, 0x0($fp)
    ctx->pc = 0x4f103cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f1040: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4f1040u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4f1044: 0x8ca9122c  lw          $t1, 0x122C($a1)
    ctx->pc = 0x4f1044u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F122Cu));
    // 0x4f1048: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4f1048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f104c: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x4f104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x4f1050: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4f1050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1054: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f1054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f1058: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4f1058u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f105c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f105cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1060: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f1060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f1064: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f1064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f1068: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4f1068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f106c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4f106cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4f1070: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x4f1070u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f1074: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f1074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f1078: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f1078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f107c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4f107cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4f1080: 0x8d220054  lw          $v0, 0x54($t1)
    ctx->pc = 0x4f1080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
    // 0x4f1084: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4f1084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f1088: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f1088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f108c: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4f108cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1090: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1090u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1094: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1098: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4f1098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4f109c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4f109cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f10a0: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4f10a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4f10a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f10a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f10a8: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4f10a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4f10ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4f10acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f10b0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4f10b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4f10b4: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x4f10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x4f10b8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f10b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f10bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f10bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f10c0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4f10c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4f10c4: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4f10c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4f10c8: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4f10c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4f10cc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4f10ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4f10d0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f10d4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f10d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f10d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4f10d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4f10dc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4f10dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4f10e0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4f10e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f10e4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4f10e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f10e8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4f10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4f10ec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f10ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f10f0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4f10f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f10f4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f10f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f10f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f10f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f10fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f10fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f1100: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4f1100u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4f1104: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4f1104u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f1108: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4f1108u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f110c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4f110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4f1110: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f1110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f1114: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4f1114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f1118: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f1118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f111c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4f111cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f1120: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1124: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f1124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f1128: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4f1128u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x4f112c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4f112cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4f1130: 0x813c44e  j           func_4F1138
    ctx->pc = 0x4F1130u;
    ctx->pc = 0x4F1134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1130u;
    // 0x4f1134: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1138u;
    goto label_4f1138;
    ctx->pc = 0x4F1138u;
label_4f1138:
    // 0x4f1138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f1138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f113c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4f113cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f1140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f1144: 0x256a011a  addiu       $t2, $t3, 0x11A
    ctx->pc = 0x4f1144u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 282));
    // 0x4f1148: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4f1148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f114c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4F114Cu;
    {
        const bool branch_taken_0x4f114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F114Cu;
        // 0x4f1150: 0x2569015e  addiu       $t1, $t3, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f114c) {
            ctx->pc = 0x4F11D0u;
            goto label_4f11d0;
        }
    }
    ctx->pc = 0x4F1154u;
    // 0x4f1154: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4f1154u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4f1158: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4f1158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4f115c: 0x25871218  addiu       $a3, $t4, 0x1218
    ctx->pc = 0x4f115cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4632));
    // 0x4f1160: 0x34420559  ori         $v0, $v0, 0x559
    ctx->pc = 0x4f1160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1369);
    // 0x4f1164: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f1164u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1218u));
    // 0x4f1168: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4f1168u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4f116c: 0x25a61210  addiu       $a2, $t5, 0x1210
    ctx->pc = 0x4f116cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4624));
    // 0x4f1170: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4f1170u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4f1174: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1178: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4f1178u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4f117c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1180: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f1180u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f1184: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f1184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f1188: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4f1188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f118c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f1190: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f1190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f1194: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4f1194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4f1198: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f1198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f119c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f119cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f11a0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4f11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4f11a4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f11a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f11a8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f11a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f11ac: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4f11acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4f11b0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f11b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f11b4: 0x2c420500  sltiu       $v0, $v0, 0x500
    ctx->pc = 0x4f11b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1280) ? 1 : 0);
    // 0x4f11b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F11B8u;
    {
        const bool branch_taken_0x4f11b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f11b8) {
            ctx->pc = 0x4F11BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F11B8u;
            // 0x4f11bc: 0xa5400000  sh          $zero, 0x0($t2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F11DCu;
            goto label_4f11dc;
        }
    }
    ctx->pc = 0x4F11C0u;
    // 0x4f11c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f11c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f11c4: 0x813c4b0  j           func_4F12C0
    ctx->pc = 0x4F11C4u;
    ctx->pc = 0x4F11C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F11C4u;
    // 0x4f11c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F12C0u;
    goto label_4f12c0;
    ctx->pc = 0x4F11CCu;
    // 0x4f11cc: 0x0  nop
    ctx->pc = 0x4f11ccu;
    // NOP
label_4f11d0:
    // 0x4f11d0: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4f11d0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4f11d4: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4f11d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4f11d8: 0x25871218  addiu       $a3, $t4, 0x1218
    ctx->pc = 0x4f11d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4632));
label_4f11dc:
    // 0x4f11dc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f11dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4f11e0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f11e4: 0x34a50538  ori         $a1, $a1, 0x538
    ctx->pc = 0x4f11e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1336);
    // 0x4f11e8: 0x25a61210  addiu       $a2, $t5, 0x1210
    ctx->pc = 0x4f11e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4624));
    // 0x4f11ec: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f11f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f11f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f11f4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4f11f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f11f8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4f11f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4f11fc: 0x244c1214  addiu       $t4, $v0, 0x1214
    ctx->pc = 0x4f11fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4628));
    // 0x4f1200: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f1200u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f1204: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4f1204u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4f1208: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f1208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f120c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4f120cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f1210: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f1210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f1214: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f1214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f1218: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4f1218u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4f121c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f121cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f1220: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f1220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f1224: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4f1224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4f1228: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f1228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f122c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f122cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f1230: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4f1230u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4f1234: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f1234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f1238: 0x2c420300  sltiu       $v0, $v0, 0x300
    ctx->pc = 0x4f1238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)768) ? 1 : 0);
    // 0x4f123c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F123Cu;
    {
        const bool branch_taken_0x4f123c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F123Cu;
        // 0x4f1240: 0x180502d  daddu       $t2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f123c) {
            ctx->pc = 0x4F1250u;
            goto label_4f1250;
        }
    }
    ctx->pc = 0x4F1244u;
    // 0x4f1244: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4f1244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f1248: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4F1248u;
    {
        const bool branch_taken_0x4f1248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1248u;
        // 0x4f124c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1248) {
            ctx->pc = 0x4F1258u;
            goto label_4f1258;
        }
    }
    ctx->pc = 0x4F1250u;
label_4f1250:
    // 0x4f1250: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4f1250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f1254: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4f1254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_4f1258:
    // 0x4f1258: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4f1258u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4f125c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4f125cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4f1260: 0x25a71210  addiu       $a3, $t5, 0x1210
    ctx->pc = 0x4f1260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 4624));
    // 0x4f1264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f1264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1268: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4f1268u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f126c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x4f126cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1270: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4f1270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f1274: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x4f1274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x4f1278: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4f1278u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f127c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f127cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f1280: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f1280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f1284: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1288: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4f1288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f128c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4f128cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4f1290: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f1290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f1294: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f1294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f1298: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4f1298u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4f129c: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4f129cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f12a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f12a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f12a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f12a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f12a8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f12a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f12ac: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4f12acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4f12b0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4f12b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4f12b4: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x4f12b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x4f12b8: 0x813c4b0  j           func_4F12C0
    ctx->pc = 0x4F12B8u;
    ctx->pc = 0x4F12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F12B8u;
    // 0x4f12bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F12C0u;
    goto label_4f12c0;
    ctx->pc = 0x4F12C0u;
label_4f12c0:
    // 0x4f12c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f12c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4f12c4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f12c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f12c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f12cc: 0x24531210  addiu       $s3, $v0, 0x1210
    ctx->pc = 0x4f12ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4624));
    // 0x4f12d0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4f12d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F1210u));
    // 0x4f12d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f12d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f12d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f12d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f12dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f12dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f12e0: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4f12e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4f12e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f12e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f12e8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4f12e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4f12ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f12ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f12f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f12f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f12f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f12f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4f12f8: 0xa642015e  sh          $v0, 0x15E($s2)
    ctx->pc = 0x4f12f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f12fc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4f12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4f1300: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x4f1300u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x7F1211u));
    // 0x4f1304: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1308: 0x84851218  lh          $a1, 0x1218($a0)
    ctx->pc = 0x4f1308u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x7F1218u));
    // 0x4f130c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f130cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f1310: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1314: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f1314u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f1318: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f131c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x4f131cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f1320: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f1320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f1324: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1328: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f1328u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f132c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f132cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1330: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4f1330u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f1334: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4f1334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4f1338: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f1338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f133c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f133cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1340: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f1340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f1344: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4f1344u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f1348: 0x864201b4  lh          $v0, 0x1B4($s2)
    ctx->pc = 0x4f1348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x4f134c: 0xa644000c  sh          $a0, 0xC($s2)
    ctx->pc = 0x4f134cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f1350: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f1350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f1354: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4f1354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f1358: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f135c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f135cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1360: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f1360u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f1364: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1368: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4f1368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f136c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4f136cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4f1370: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f1370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f1374: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1374u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1378: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f1378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f137c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f137cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f1380: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f1380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f1384: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4f1384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f1388: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x4F1388u;
    {
        const bool branch_taken_0x4f1388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1388u;
        // 0x4f138c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1388) {
            ctx->pc = 0x4F162Cu;
            goto label_4f162c;
        }
    }
    ctx->pc = 0x4F1390u;
    // 0x4f1390: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f1390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f1394: 0x8c47122c  lw          $a3, 0x122C($v0)
    ctx->pc = 0x4f1394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4652)));
    // 0x4f1398: 0x2475121c  addiu       $s5, $v1, 0x121C
    ctx->pc = 0x4f1398u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4636));
    // 0x4f139c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4f139cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F121Cu));
    // 0x4f13a0: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4f13a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4f13a4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4f13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f13a8: 0x25291224  addiu       $t1, $t1, 0x1224
    ctx->pc = 0x4f13a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4644));
    // 0x4f13ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f13acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f13b0: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4f13b0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1224u));
    // 0x4f13b4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f13b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f13b8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f13bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f13bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f13c0: 0x24741220  addiu       $s4, $v1, 0x1220
    ctx->pc = 0x4f13c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4640));
    // 0x4f13c4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f13c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f13c8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4f13c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f13cc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f13ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f13d0: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4f13d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4f13d4: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4f13d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4f13d8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f13d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f13dc: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4f13dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4f13e0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f13e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f13e4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4f13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4f13e8: 0x260d2494  addiu       $t5, $s0, 0x2494
    ctx->pc = 0x4f13e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 9364));
    // 0x4f13ec: 0x260e2498  addiu       $t6, $s0, 0x2498
    ctx->pc = 0x4f13ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 9368));
    // 0x4f13f0: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x4f13f0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x72FB14u));
    // 0x4f13f4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f13f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f13f8: 0x8dcb0000  lw          $t3, 0x0($t6)
    ctx->pc = 0x4f13f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4f13fc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f13fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1400: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f1400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f1404: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f1404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f1408: 0x260f249c  addiu       $t7, $s0, 0x249C
    ctx->pc = 0x4f1408u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 9372));
    // 0x4f140c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f140cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f1410: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4f1410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f1414: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4f1414u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4f1418: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f1418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f141c: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4f141cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x4f1420: 0x1715825  or          $t3, $t3, $s1
    ctx->pc = 0x4f1420u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 17));
    // 0x4f1424: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4f1424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4f1428: 0x8dec0000  lw          $t4, 0x0($t7)
    ctx->pc = 0x4f1428u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4f142c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f1430: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x4f1430u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f1434: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1434u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f1438: 0x1916025  or          $t4, $t4, $s1
    ctx->pc = 0x4f1438u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 17));
    // 0x4f143c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f1440: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f1440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f1444: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4f1444u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4f1448: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f1448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f144c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4f144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4f1450: 0x85280000  lh          $t0, 0x0($t1)
    ctx->pc = 0x4f1450u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f1454: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f1454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f1458: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1458u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f145c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f145cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f1460: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4f1460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4f1464: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f1464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f1468: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4f1468u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4f146c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4f146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4f1470: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4f1470u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f1474: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f1474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f1478: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f1478u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f147c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f147cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f1480: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4f1480u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4f1484: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1488: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4f1488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4f148c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4f148cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4f1490: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4f1490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4f1494: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4f1494u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4f1498: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4f1498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4f149c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4f149cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f14a0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4f14a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4f14a4: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x4f14a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
    // 0x4f14a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f14a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f14ac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f14acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f14b0: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4f14b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4f14b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f14b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f14b8: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4f14b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4f14bc: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x4f14bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x4f14c0: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4f14c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4f14c4: 0xadcb0000  sw          $t3, 0x0($t6)
    ctx->pc = 0x4f14c4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
    // 0x4f14c8: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4f14c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4f14cc: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4f14ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f14d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f14d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f14d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f14d8: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x4f14d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x4f14dc: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4F14DCu;
    SET_GPR_U32(ctx, 31, 0x4F14E4u);
    ctx->pc = 0x4F14E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F14DCu;
    // 0x4f14e0: 0xadec0000  sw          $t4, 0x0($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4F14DCu, 0x4F14E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F14E4u;
label_4f14e4:
    // 0x4f14e4: 0x860524a2  lh          $a1, 0x24A2($s0)
    ctx->pc = 0x4f14e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 9378)));
    // 0x4f14e8: 0x860224a0  lh          $v0, 0x24A0($s0)
    ctx->pc = 0x4f14e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 9376)));
    // 0x4f14ec: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4f14ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f14f0: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4f14f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4f14f4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4f14f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f14f8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f14f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f14fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f14fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f1500: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1504: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f1504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f1508: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4f1508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4f150c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4f150cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4f1510: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4f1510u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4f1514: 0x8642011a  lh          $v0, 0x11A($s2)
    ctx->pc = 0x4f1514u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 282)));
    // 0x4f1518: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x4F1518u;
    {
        const bool branch_taken_0x4f1518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f1518) {
            ctx->pc = 0x4F151Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F1518u;
            // 0x4f151c: 0x96a30000  lhu         $v1, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F1618u;
            goto label_4f1618;
        }
    }
    ctx->pc = 0x4F1520u;
    // 0x4f1520: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F1520u;
    SET_GPR_U32(ctx, 31, 0x4F1528u);
    ctx->pc = 0x4F1524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1520u;
    // 0x4f1524: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F1520u, 0x4F1528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1528u;
label_4f1528:
    // 0x4f1528: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4f1528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f152c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f152cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f1530: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1534: 0x26101214  addiu       $s0, $s0, 0x1214
    ctx->pc = 0x4f1534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4628));
    // 0x4f1538: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f1538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f153c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4f153cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1540: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f1540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f1544: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x4f1544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1548: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x4f1548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x4f154c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f154cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f1550: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4f1550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f1554: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4f1554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4f1558: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4f1558u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f155c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4f155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4f1560: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4f1560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x4f1564: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4f1564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4f1568: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f1568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f156c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f156cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f1570: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4f1570u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1574: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4f1574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4f1578: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f1578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f157c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4f157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4f1580: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4f1580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f1584: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f1584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f1588: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x4f1588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x4f158c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f158cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f1590: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f1590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f1594: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4f1594u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4f1598: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4f1598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f159c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4f159cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4f15a0: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4f15a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4f15a4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4f15a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4f15a8: 0xc13e438  jal         func_4F90E0
    ctx->pc = 0x4F15A8u;
    SET_GPR_U32(ctx, 31, 0x4F15B0u);
    ctx->pc = 0x4F15ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F15A8u;
    // 0x4f15ac: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F90E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F90E0u, 0x4F15A8u, 0x4F15B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F15B0u;
label_4f15b0:
    // 0x4f15b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f15b4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f15b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f15b8: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4f15b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f15bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f15bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f15c0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4f15c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f15c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f15c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f15c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f15cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f15ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f15d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f15d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f15d4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f15d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f15d8: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4f15d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x4f15dc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f15dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f15e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f15e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f15e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f15e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f15e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f15e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f15ec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f15ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f15f0: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x4f15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x4f15f4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f15f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f15f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f15f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f15fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f1600: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f1600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f1604: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4f1604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f1608: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4f1608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4f160c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4f160cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4f1610: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4f1610u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4f1614: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4f1614u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4f1618:
    // 0x4f1618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f1618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f161c: 0xa6430118  sh          $v1, 0x118($s2)
    ctx->pc = 0x4f161cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f1620: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4f1620u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f1624: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4F1624u;
    SET_GPR_U32(ctx, 31, 0x4F162Cu);
    ctx->pc = 0x4F1628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1624u;
    // 0x4f1628: 0xa642011c  sh          $v0, 0x11C($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 284), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4F1624u, 0x4F162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F162Cu;
label_4f162c:
    // 0x4f162c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4F162Cu;
    SET_GPR_U32(ctx, 31, 0x4F1634u);
    ctx->pc = 0x4F1630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F162Cu;
    // 0x4f1630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4F162Cu, 0x4F1634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1634u;
label_4f1634:
    // 0x4f1634: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4F1634u;
    {
        const bool branch_taken_0x4f1634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1634u;
        // 0x4f1638: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1634) {
            ctx->pc = 0x4F16B0u;
            goto label_4f16b0;
        }
    }
    ctx->pc = 0x4F163Cu;
    // 0x4f163c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f163cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1640: 0x24501228  addiu       $s0, $v0, 0x1228
    ctx->pc = 0x4f1640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4648));
    // 0x4f1644: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4f1644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f1648: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4F1648u;
    SET_GPR_U32(ctx, 31, 0x4F1650u);
    ctx->pc = 0x4F164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1648u;
    // 0x4f164c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4F1648u, 0x4F1650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1650u;
label_4f1650:
    // 0x4f1650: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4F1650u;
    {
        const bool branch_taken_0x4f1650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4f1650) {
            ctx->pc = 0x4F1654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F1650u;
            // 0x4f1654: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F1698u;
            goto label_4f1698;
        }
    }
    ctx->pc = 0x4F1658u;
    // 0x4f1658: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4f1658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4f165c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x4f165cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4f1660: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4f1660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4f1664: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x4f1664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4f1668: 0xa443232c  sh          $v1, 0x232C($v0)
    ctx->pc = 0x4f1668u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9ACu, _value); } while (0);
    // 0x4f166c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f166cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1670: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4F1670u;
    SET_GPR_U32(ctx, 31, 0x4F1678u);
    ctx->pc = 0x4F1674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1670u;
    // 0x4f1674: 0xa44523c4  sh          $a1, 0x23C4($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4F1670u, 0x4F1678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1678u;
label_4f1678:
    // 0x4f1678: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4F1678u;
    SET_GPR_U32(ctx, 31, 0x4F1680u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4F1678u, 0x4F1680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1680u;
label_4f1680:
    // 0x4f1680: 0xc126d66  jal         func_49B598
    ctx->pc = 0x4F1680u;
    SET_GPR_U32(ctx, 31, 0x4F1688u);
    ctx->pc = 0x4F1684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1680u;
    // 0x4f1684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B598u, 0x4F1680u, 0x4F1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1688u;
label_4f1688:
    // 0x4f1688: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4F1688u;
    SET_GPR_U32(ctx, 31, 0x4F1690u);
    ctx->pc = 0x4F168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1688u;
    // 0x4f168c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4F1688u, 0x4F1690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1690u;
label_4f1690:
    // 0x4f1690: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F1690u;
    {
        const bool branch_taken_0x4f1690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1690u;
        // 0x4f1694: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1690) {
            ctx->pc = 0x4F16B4u;
            goto label_4f16b4;
        }
    }
    ctx->pc = 0x4F1698u;
label_4f1698:
    // 0x4f1698: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4F1698u;
    SET_GPR_U32(ctx, 31, 0x4F16A0u);
    ctx->pc = 0x4F169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1698u;
    // 0x4f169c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4F1698u, 0x4F16A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F16A0u;
label_4f16a0:
    // 0x4f16a0: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F16A0u;
    {
        const bool branch_taken_0x4f16a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4f16a0) {
            ctx->pc = 0x4F16A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F16A0u;
            // 0x4f16a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F16B4u;
            goto label_4f16b4;
        }
    }
    ctx->pc = 0x4F16A8u;
    // 0x4f16a8: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4F16A8u;
    SET_GPR_U32(ctx, 31, 0x4F16B0u);
    ctx->pc = 0x4F16ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F16A8u;
    // 0x4f16ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4F16A8u, 0x4F16B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F16B0u;
label_4f16b0:
    // 0x4f16b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f16b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f16b4:
    // 0x4f16b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f16b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f16b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f16b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f16bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f16bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f16c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f16c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f16c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f16c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f16c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f16c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f16cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F16CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F16CCu;
        // 0x4f16d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F16CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F16D4u;
    // 0x4f16d4: 0x0  nop
    ctx->pc = 0x4f16d4u;
    // NOP
    ctx->pc = 0x4f16d8u;
}
