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

// Function: sub_0022C680
// Address: 0x22c680 - 0x22c7a0
void sub_0022C680_0x22c680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C680_0x22c680");
#endif

    switch (ctx->pc) {
        case 0x22c6f0u: goto label_22c6f0;
        default: break;
    }

    ctx->pc = 0x22c680u;

    // 0x22c680: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22c680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22c684: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x22c684u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c688: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x22c688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x22c68c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c690: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x22c690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x22c694: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22c694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c698: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x22c698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x22c69c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22c69cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c6a0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x22c6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x22c6a4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x22c6a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c6a8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x22c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x22c6ac: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x22c6acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c6b0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x22c6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x22c6b4: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x22c6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c6b8: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x22c6b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x22c6bc: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x22c6bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22c6c0: 0x78ec0010  lq          $t4, 0x10($a3)
    ctx->pc = 0x22c6c0u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x22c6c4: 0x78e50020  lq          $a1, 0x20($a3)
    ctx->pc = 0x22c6c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x22c6c8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x22c6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c6cc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x22c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x22c6d0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x22c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x22c6d4: 0x7fac0010  sq          $t4, 0x10($sp)
    ctx->pc = 0x22c6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 12));
    // 0x22c6d8: 0x10cd0006  beq         $a2, $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C6D8u;
    {
        const bool branch_taken_0x22c6d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 13));
        ctx->pc = 0x22C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6D8u;
        // 0x22c6dc: 0x7fa50020  sq          $a1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6d8) {
            ctx->pc = 0x22C6F4u;
            goto label_22c6f4;
        }
    }
    ctx->pc = 0x22C6E0u;
    // 0x22c6e0: 0x79420010  lq          $v0, 0x10($t2)
    ctx->pc = 0x22c6e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x22c6e4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x22c6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x22c6e8: 0xc09040a  jal         func_241028
    ctx->pc = 0x22C6E8u;
    SET_GPR_U32(ctx, 31, 0x22C6F0u);
    ctx->pc = 0x22C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C6E8u;
    // 0x22c6ec: 0xc7ac0034  lwc1        $f12, 0x34($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x241028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241028u, 0x22C6E8u, 0x22C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6F0u;
label_22c6f0:
    // 0x22c6f0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x22c6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_22c6f4:
    // 0x22c6f4: 0x56200022  bnel        $s1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x22C6F4u;
    {
        const bool branch_taken_0x22c6f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c6f4) {
            ctx->pc = 0x22C6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C6F4u;
            // 0x22c6f8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C780u;
            goto label_22c780;
        }
    }
    ctx->pc = 0x22C6FCu;
    // 0x22c6fc: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x22c6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x22c700: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x22c700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c704: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22c704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22c708: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22c708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22c70c: 0x24429290  addiu       $v0, $v0, -0x6D70
    ctx->pc = 0x22c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939280));
    // 0x22c710: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x22c710u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x22c714: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x22c714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22c718: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x22c718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22c71c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x22c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x15929Cu));
    // 0x22c720: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22c720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x159298u));
    // 0x22c724: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x22c724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22c728: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x22c728u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x22c72c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x22C72Cu;
    {
        const bool branch_taken_0x22c72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C72Cu;
        // 0x22c730: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c72c) {
            ctx->pc = 0x22C77Cu;
            goto label_22c77c;
        }
    }
    ctx->pc = 0x22C734u;
    // 0x22c734: 0xac860050  sw          $a2, 0x50($a0)
    ctx->pc = 0x22c734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 6));
    // 0x22c738: 0xac930054  sw          $s3, 0x54($a0)
    ctx->pc = 0x22c738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 19));
    // 0x22c73c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x22c73cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c740: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x22c740u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x22c744: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x22c744u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c748: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x22c748u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x22c74c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x22c74cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c750: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x22c750u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x22c754: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x22c754u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c758: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x22c758u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x22c75c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x22c75cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22c760: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x22c760u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x22c764: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x22c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22c768: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x22c768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x22c76c: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x22c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x22c770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c774: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x22c774u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x22c778: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x22c778u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_22c77c:
    // 0x22c77c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x22c77cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22c780:
    // 0x22c780: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x22c780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c784: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x22c784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c788: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x22c788u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22c78c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x22c78cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c790: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x22c790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22c794: 0x3e00008  jr          $ra
    ctx->pc = 0x22C794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C794u;
        // 0x22c798: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C79Cu;
    // 0x22c79c: 0x0  nop
    ctx->pc = 0x22c79cu;
    // NOP
    ctx->pc = 0x22c7a0u;
}
