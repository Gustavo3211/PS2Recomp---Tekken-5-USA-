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

// Function: sub_004E9588
// Address: 0x4e9588 - 0x4e96e0
void sub_004E9588_0x4e9588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9588_0x4e9588");
#endif

    switch (ctx->pc) {
        case 0x4e95b0u: goto label_4e95b0;
        case 0x4e9694u: goto label_4e9694;
        case 0x4e96b8u: goto label_4e96b8;
        default: break;
    }

    ctx->pc = 0x4e9588u;

    // 0x4e9588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e9588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e958c: 0x248301bc  addiu       $v1, $a0, 0x1BC
    ctx->pc = 0x4e958cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    // 0x4e9590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e9594: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e9594u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e9598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e959c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e959cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e95a0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e95a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e95a4: 0x813a56c  j           func_4E95B0
    ctx->pc = 0x4E95A4u;
    ctx->pc = 0x4E95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E95A4u;
    // 0x4e95a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E95B0u;
    goto label_4e95b0;
    ctx->pc = 0x4E95ACu;
    // 0x4e95ac: 0x0  nop
    ctx->pc = 0x4e95acu;
    // NOP
label_4e95b0:
    // 0x4e95b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e95b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e95b4: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4e95b4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4e95b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e95b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e95bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e95bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e95c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e95c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e95c4: 0x25ce11f4  addiu       $t6, $t6, 0x11F4
    ctx->pc = 0x4e95c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4596));
    // 0x4e95c8: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4e95c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x4e95cc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e95d0: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x4e95d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4e95d4: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4e95d4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4e95d8: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x4e95d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11F4u));
    // 0x4e95dc: 0x25ad11fc  addiu       $t5, $t5, 0x11FC
    ctx->pc = 0x4e95dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4604));
    // 0x4e95e0: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4e95e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4e95e4: 0xac6011f8  sw          $zero, 0x11F8($v1)
    ctx->pc = 0x4e95e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F11F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11F8u, _value); } while (0);
    // 0x4e95e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e95e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e95ec: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4e95ecu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4e95f0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e95f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e95f4: 0x258c11ec  addiu       $t4, $t4, 0x11EC
    ctx->pc = 0x4e95f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4588));
    // 0x4e95f8: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x4e95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x4e95fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e95fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e9600: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e9600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e9604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e9604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9608: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4e9608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e960c: 0x8da80000  lw          $t0, 0x0($t5)
    ctx->pc = 0x4e960cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e9610: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4e9610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x4e9614: 0x8c6f120c  lw          $t7, 0x120C($v1)
    ctx->pc = 0x4e9614u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4620)));
    // 0x4e9618: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e9618u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e961c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e961cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e9620: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4e9620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4e9624: 0x85ca0000  lh          $t2, 0x0($t6)
    ctx->pc = 0x4e9624u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4e9628: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4e9628u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4e962c: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x4e962cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4e9630: 0xada80000  sw          $t0, 0x0($t5)
    ctx->pc = 0x4e9630u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 8));
    // 0x4e9634: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e9634u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e9638: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e9638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e963c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e963cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e9640: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4e9640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4e9644: 0x34633800  ori         $v1, $v1, 0x3800
    ctx->pc = 0x4e9644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14336);
    // 0x4e9648: 0x85a90000  lh          $t1, 0x0($t5)
    ctx->pc = 0x4e9648u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4e964c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4e964cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4e9650: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4e9650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x4e9654: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4e9654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9658: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e9658u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e965c: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4e965cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4e9660: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x4e9660u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x4e9664: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4e9664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4e9668: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x4e9668u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x4e966c: 0x8de20008  lw          $v0, 0x8($t7)
    ctx->pc = 0x4e966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x4e9670: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x4e9670u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x4e9674: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4e9674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x4e9678: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e9678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e967c: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4e967cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4e9680: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x4e9680u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x4e9684: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4e9684u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4e9688: 0xada80000  sw          $t0, 0x0($t5)
    ctx->pc = 0x4e9688u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 8));
    // 0x4e968c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4E968Cu;
    SET_GPR_U32(ctx, 31, 0x4E9694u);
    ctx->pc = 0x4E9690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E968Cu;
    // 0x4e9690: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4E968Cu, 0x4E9694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9694u;
label_4e9694:
    // 0x4e9694: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e9694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e9698: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E9698u;
    {
        const bool branch_taken_0x4e9698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9698u;
        // 0x4e969c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9698) {
            ctx->pc = 0x4E96B0u;
            goto label_4e96b0;
        }
    }
    ctx->pc = 0x4E96A0u;
    // 0x4e96a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e96a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e96a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e96a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e96a8: 0x813bcb8  j           func_4EF2E0
    ctx->pc = 0x4E96A8u;
    ctx->pc = 0x4E96ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E96A8u;
    // 0x4e96ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2E0u;
    sub_004EF2E0_0x4ef2e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E96B0u;
label_4e96b0:
    // 0x4e96b0: 0xc13a5e6  jal         func_4E9798
    ctx->pc = 0x4E96B0u;
    SET_GPR_U32(ctx, 31, 0x4E96B8u);
    ctx->pc = 0x4E96B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E96B0u;
    // 0x4e96b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9798u, 0x4E96B0u, 0x4E96B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E96B8u;
label_4e96b8:
    // 0x4e96b8: 0x260401bc  addiu       $a0, $s0, 0x1BC
    ctx->pc = 0x4e96b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4e96bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4e96bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e96c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e96c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e96c4: 0xa6030160  sh          $v1, 0x160($s0)
    ctx->pc = 0x4e96c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e96c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e96c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e96cc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e96ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e96d0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e96d4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4e96d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e96d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4E96D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E96D8u;
        // 0x4e96dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E96D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E96E0u;
}
